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

class output_everrun domain_path availability = object
  inherit output

  method as_options =
    printf "[franklin] as options ok";
    match availability with
    | "FT" -> sprintf "-o everrunft -os %s" domain_path
    | "HA" -> sprintf "-o everrunha -os %s" domain_path
    | s ->
      error (f_"unknown -os option: %s") s

  method supported_firmware = [ TargetBIOS; TargetUEFI ]
  method get_class_name = "output_everrun"
  method prepare_targets source targets =

    printf "[franklin] prepare targets ok";
    List.map (
      fun t ->
        let target_file = domain_path // source.s_name ^ "-" ^ t.target_overlay.ov_sd in
        { t with target_file = target_file }
    ) targets
    (* 1. check whether the domain exists *)

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
    let file = domain_path // name ^ ".xml" in

    let chan = open_out file in
    DOM.doc_to_chan chan doc;
    close_out chan

end

let output_everrun = new output_everrun
let () = Modules_list.register_output_module "everrunft"
let () = Modules_list.register_output_module "everrunha"
