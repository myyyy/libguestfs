(* virt-v2v
 * Copyright (C) 2009-2015 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *)

open Printf

open Common_gettext.Gettext
open Common_utils

open Types
open Utils

let tmp_output_file = ref "tmp_output.out"

let clean_up () =
  let cmd = sprintf "rm -rf %s" !tmp_output_file in
  if Sys.command cmd <> 0 then
    error (f_"delete temp response file error");
;;

(* let get_doh_session () =
  let passwd = match get_everrun_passwd with
                  | None -> error (f_"No password is found");
                  | s -> s in
  let cmd_curl_login = sprintf "curl -s -b cookie_file -c cookie_file -H \"Content-type: text/xml\" -d \"<requests output='XML'><request id='1' target='session'><login><username>root</username><password>%s</password></login></request></requests>\" http://localhost/doh/ > %s" passwd !tmp_output_file in
  if Sys.command cmd_curl_login <> 0 then
    error (f_"get doh session failed");
  let xml = read_whole_file !tmp_output_file in
  clean_up ();
  let doc = Xml.parse_memory xml in
  let xpathctx = Xml.xpath_new_context doc in
  let xpath_string = xpath_string xpathctx in

  let status = xpath_string "/responses/response/login/@status" in
  if status <> "ok" then
    error (f_"login failed");
;; *)

class output_everrun storage_group availability = object
  inherit output

  val mutable capabilities_doc = None

  method as_options =
    printf "[franklin] as options ok";
    match availability with
    | "FT" -> sprintf "-o everrunft -os %s" storage_group
    | "HA" -> sprintf "-o everrunha -os %s" storage_group
    | s ->
      error (f_"unknown -os option: %s") s

  method supported_firmware = [ TargetBIOS; TargetUEFI ]

  method prepare_targets source targets =
    (* capabilities_doc <- Some doc; *)
 (*    let cmd = sprintf "curl http://localhost:8999 > /home/franklin/temp/response.xml" in
    if Sys.command cmd <> 0 then
      error (f_"get response error"); *)
    List.map (
      fun t ->
        let target_file = source.s_name ^ "-" ^ t.target_overlay.ov_sd in
        { t with target_file = target_file }
    ) targets

  method create_metadata source _ target_buses guestcaps _ target_firmware =
    printf "[franklin] create_metadata ok";
    (* We don't know what target features the hypervisor supports, but
     * assume a common set that libvirt supports.
     *)
    let target_features =
      match guestcaps.gcaps_arch with
      | "i686" -> [ "acpi"; "apic"; "pae" ]
      | "x86_64" -> [ "acpi"; "apic" ]
      | _ -> [] in

    let doc =
      Output_libvirt.create_libvirt_xml source target_buses
        guestcaps target_features target_firmware in

    let name = source.s_name in
    let file = storage_group // name ^ ".xml" in

    let chan = open_out file in
    DOM.doc_to_chan chan doc;
    close_out chan

end

let output_everrun = new output_everrun
let () = Modules_list.register_output_module "everrunft"
let () = Modules_list.register_output_module "everrunha"
