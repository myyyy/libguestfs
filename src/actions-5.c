/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM:
 *   generator/ *.ml
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2015 Red Hat Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#include "guestfs.h"
#include "guestfs-internal.h"
#include "guestfs-internal-actions.h"
#include "guestfs_protocol.h"
#include "errnostring.h"

GUESTFS_DLL_PUBLIC char *
guestfs_internal_test_rstring (guestfs_h *g,
                               const char *val)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rstring", 21);
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test_rstring", "val");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rstring");
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rstring (g, val);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rstring");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_rstring", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC struct guestfs_lvm_pv_list *
guestfs_internal_test_rstructlisterr (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_lvm_pv_list *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rstructlisterr", 28);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rstructlisterr");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rstructlisterr (g);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rstructlisterr");
      fprintf (trace_buffer.fp, "<struct guestfs_lvm_pv_list *>");
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_rstructlisterr", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_internal_test_close_output (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_close_output", 26);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_close_output");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_close_output (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_close_output");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_close_output", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_launch (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "launch");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "launch", 6);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "launch");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_launch (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "launch");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "launch", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_wait_ready (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "wait_ready", 10);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "wait_ready");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_wait_ready (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "wait_ready");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wait_ready", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_autosync (guestfs_h *g,
                      int autosync)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_autosync", 12);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_autosync");
    fputs (autosync ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_autosync (g, autosync);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_autosync");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_autosync", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_config (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_config", 9);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_config");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_is_config (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "is_config");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_config", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_launching (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_launching", 12);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_launching");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_is_launching (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "is_launching");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_launching", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_recovery_proc (guestfs_h *g,
                           int recoveryproc)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_recovery_proc");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_recovery_proc", 17);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_recovery_proc");
    fputs (recoveryproc ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_recovery_proc (g, recoveryproc);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_recovery_proc");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_recovery_proc", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_inspect_get_mountpoints (guestfs_h *g,
                                 const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_mountpoints", 23);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_mountpoints", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_mountpoints");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_mountpoints (g, root);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_mountpoints");
      fputs ("[", trace_buffer.fp);
      for (i = 0; r[i]; ++i) {
        if (i > 0) fputs (", ", trace_buffer.fp);
        fputs ("\"", trace_buffer.fp);
        fputs (r[i], trace_buffer.fp);
        fputs ("\"", trace_buffer.fp);
      }
      fputs ("]", trace_buffer.fp);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_mountpoints", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC struct guestfs_application_list *
guestfs_inspect_list_applications (guestfs_h *g,
                                   const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_application_list *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_list_applications", 25);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_list_applications", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_list_applications");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_list_applications (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_list_applications");
      fprintf (trace_buffer.fp, "<struct guestfs_application_list *>");
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_list_applications", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_inspect_is_netinst (guestfs_h *g,
                            const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_is_netinst", 18);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_is_netinst", "root");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_is_netinst");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_is_netinst (g, root);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_is_netinst");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_is_netinst", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_inspect_get_drive_mappings (guestfs_h *g,
                                    const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_drive_mappings", 26);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_drive_mappings", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_drive_mappings");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_drive_mappings (g, root);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_drive_mappings");
      fputs ("[", trace_buffer.fp);
      for (i = 0; r[i]; ++i) {
        if (i > 0) fputs (", ", trace_buffer.fp);
        fputs ("\"", trace_buffer.fp);
        fputs (r[i], trace_buffer.fp);
        fputs ("\"", trace_buffer.fp);
      }
      fputs ("]", trace_buffer.fp);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_drive_mappings", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_inspect_get_icon_argv (guestfs_h *g,
                               const char *root,
                               size_t *size_r,
                               const struct guestfs_inspect_get_icon_argv *optargs)
{
  struct guestfs_inspect_get_icon_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_icon", 16);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_icon", "root");
    return NULL;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "inspect_get_icon", "inspect_get_icon");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_icon");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    if (optargs->bitmask & GUESTFS_INSPECT_GET_ICON_FAVICON_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "favicon", optargs->favicon ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_INSPECT_GET_ICON_HIGHQUALITY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "highquality", optargs->highquality ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_icon (g, root, size_r, optargs);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_icon");
      guestfs_int_print_BufferOut (trace_buffer.fp, r, *size_r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_icon", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_backend_setting (guestfs_h *g,
                             const char *name,
                             const char *val)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_backend_setting");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_backend_setting", 19);
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_backend_setting", "name");
    return -1;
  }
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_backend_setting", "val");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_backend_setting");
    fprintf (trace_buffer.fp, " \"%s\"", name);
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_backend_setting (g, name, val);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_backend_setting");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_backend_setting", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC struct guestfs_stat *
guestfs_stat (guestfs_h *g,
              const char *path)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_stat *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "stat", 4);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "stat", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "stat");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_stat (g, path);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "stat");
      fprintf (trace_buffer.fp, "<struct guestfs_stat *>");
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "stat", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_copy_out (guestfs_h *g,
                  const char *remotepath,
                  const char *localdir)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "copy_out", 8);
  if (remotepath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_out", "remotepath");
    return -1;
  }
  if (localdir == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_out", "localdir");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "copy_out");
    fprintf (trace_buffer.fp, " \"%s\"", remotepath);
    fprintf (trace_buffer.fp, " \"%s\"", localdir);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_copy_out (g, remotepath, localdir);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "copy_out");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_out", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_touch (guestfs_h *g,
               const char *path)
{
  struct guestfs_touch_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "touch", 5);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "touch", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "touch");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "touch") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "touch", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_TOUCH,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_touch_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "touch", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "touch", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "touch", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TOUCH, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "touch", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "touch", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "touch", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "touch",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "touch");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_pvs (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_pvs_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "pvs", 3);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "pvs");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "pvs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvs", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_PVS, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvs", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "pvs", &hdr, &err,
        (xdrproc_t) xdr_guestfs_pvs_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvs", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PVS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvs", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvs", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "pvs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "pvs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.physvols.physvols_val =
    safe_realloc (g, ret.physvols.physvols_val,
                  sizeof (char *) * (ret.physvols.physvols_len + 1));
  ret.physvols.physvols_val[ret.physvols.physvols_len] = NULL;
  ret_v = ret.physvols.physvols_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "pvs");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_lvm_lv_list *
guestfs_lvs_full (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_lvs_full_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_lvm_lv_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lvs_full", 8);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvs_full");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvs_full") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvs_full", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LVS_FULL, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvs_full", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "lvs_full", &hdr, &err,
        (xdrproc_t) xdr_guestfs_lvs_full_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvs_full", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVS_FULL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvs_full", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvs_full", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvs_full", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvs_full",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.logvols, sizeof (ret.logvols));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvs_full");
    fprintf (trace_buffer.fp, "<struct guestfs_lvm_lv_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_aug_defvar (guestfs_h *g,
                    const char *name,
                    const char *expr)
{
  struct guestfs_aug_defvar_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_aug_defvar_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_defvar", 10);
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_defvar", "name");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_defvar");
    fprintf (trace_buffer.fp, " \"%s\"", name);
    if (expr)
      fprintf (trace_buffer.fp, " \"%s\"", expr);
    else
      fprintf (trace_buffer.fp, " null");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_defvar") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defvar", "-1");
    return -1;
  }

  args.name = (char *) name;
  args.expr = expr ? (char **) &expr : NULL;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_DEFVAR,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_defvar_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defvar", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "aug_defvar", &hdr, &err,
        (xdrproc_t) xdr_guestfs_aug_defvar_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defvar", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_DEFVAR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defvar", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defvar", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_defvar", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_defvar",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.nrnodes;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_defvar");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_aug_set (guestfs_h *g,
                 const char *augpath,
                 const char *val)
{
  struct guestfs_aug_set_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_set", 7);
  if (augpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_set", "augpath");
    return -1;
  }
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_set", "val");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_set");
    fprintf (trace_buffer.fp, " \"%s\"", augpath);
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_set") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_set", "-1");
    return -1;
  }

  args.augpath = (char *) augpath;
  args.val = (char *) val;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_SET,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_set_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_set", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "aug_set", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_set", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_SET, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_set", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_set", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_set", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_set",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_set");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_aug_save (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_save", 8);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_save");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_save") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_save", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_SAVE, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_save", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "aug_save", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_save", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_SAVE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_save", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_save", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_save", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_save",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_save");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_dir_opts_argv (guestfs_h *g,
                          const char *path,
                          const struct guestfs_is_dir_opts_argv *optargs)
{
  struct guestfs_is_dir_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_is_dir_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_dir_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_dir", 6);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_dir_opts", "path");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "is_dir_opts", "is_dir_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_dir");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    if (optargs->bitmask & GUESTFS_IS_DIR_OPTS_FOLLOWSYMLINKS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "followsymlinks", optargs->followsymlinks ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_dir") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_dir", "-1");
    return -1;
  }

  args.path = (char *) path;
  if (optargs->bitmask & GUESTFS_IS_DIR_OPTS_FOLLOWSYMLINKS_BITMASK) {
    args.followsymlinks = optargs->followsymlinks;
  } else {
    args.followsymlinks = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_DIR,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_is_dir_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_dir", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_dir", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_dir_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_dir", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_DIR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_dir", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_dir", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_dir", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_dir",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.dirflag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_dir");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_vgcreate (guestfs_h *g,
                  const char *volgroup,
                  char *const *physvols)
{
  struct guestfs_vgcreate_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "vgcreate", 8);
  if (volgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vgcreate", "volgroup");
    return -1;
  }
  if (physvols == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vgcreate", "physvols");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vgcreate");
    fprintf (trace_buffer.fp, " \"%s\"", volgroup);
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; physvols[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (physvols[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vgcreate") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgcreate", "-1");
    return -1;
  }

  args.volgroup = (char *) volgroup;
  args.physvols.physvols_val = (char **) physvols;
  for (args.physvols.physvols_len = 0; physvols[args.physvols.physvols_len]; args.physvols.physvols_len++) ;
  serial = guestfs_int_send (g, GUESTFS_PROC_VGCREATE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_vgcreate_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgcreate", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "vgcreate", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgcreate", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VGCREATE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgcreate", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgcreate", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vgcreate", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vgcreate",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vgcreate");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lvcreate (guestfs_h *g,
                  const char *logvol,
                  const char *volgroup,
                  int mbytes)
{
  struct guestfs_lvcreate_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lvcreate", 8);
  if (logvol == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvcreate", "logvol");
    return -1;
  }
  if (volgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvcreate", "volgroup");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvcreate");
    fprintf (trace_buffer.fp, " \"%s\"", logvol);
    fprintf (trace_buffer.fp, " \"%s\"", volgroup);
    fprintf (trace_buffer.fp, " %d", mbytes);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvcreate") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate", "-1");
    return -1;
  }

  args.logvol = (char *) logvol;
  args.volgroup = (char *) volgroup;
  args.mbytes = mbytes;
  serial = guestfs_int_send (g, GUESTFS_PROC_LVCREATE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lvcreate_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lvcreate", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVCREATE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvcreate", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvcreate",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvcreate");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_command_lines (guestfs_h *g,
                       char *const *arguments)
{
  struct guestfs_command_lines_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_command_lines_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "command_lines", 13);
  if (arguments == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "command_lines", "arguments");
    return NULL;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "command_lines");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; arguments[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (arguments[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "command_lines") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command_lines", "NULL");
    return NULL;
  }

  args.arguments.arguments_val = (char **) arguments;
  for (args.arguments.arguments_len = 0; arguments[args.arguments.arguments_len]; args.arguments.arguments_len++) ;
  serial = guestfs_int_send (g, GUESTFS_PROC_COMMAND_LINES,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_command_lines_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command_lines", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "command_lines", &hdr, &err,
        (xdrproc_t) xdr_guestfs_command_lines_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command_lines", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COMMAND_LINES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command_lines", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command_lines", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "command_lines", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "command_lines",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.lines.lines_val =
    safe_realloc (g, ret.lines.lines_val,
                  sizeof (char *) * (ret.lines.lines_len + 1));
  ret.lines.lines_val[ret.lines.lines_len] = NULL;
  ret_v = ret.lines.lines_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "command_lines");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_blockdev_setro (guestfs_h *g,
                        const char *device)
{
  struct guestfs_blockdev_setro_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blockdev_setro", 14);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blockdev_setro", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blockdev_setro");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blockdev_setro") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setro", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLOCKDEV_SETRO,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blockdev_setro_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setro", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "blockdev_setro", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setro", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLOCKDEV_SETRO, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setro", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setro", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blockdev_setro", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blockdev_setro",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blockdev_setro");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_upload (guestfs_h *g,
                const char *filename,
                const char *remotefilename)
{
  struct guestfs_upload_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  uint64_t progress_hint = 0;
  struct stat progress_stat;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "upload", 6);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "upload", "filename");
    return -1;
  }
  if (remotefilename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "upload", "remotefilename");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "upload");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    fprintf (trace_buffer.fp, " \"%s\"", remotefilename);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (stat (filename, &progress_stat) == 0 &&
      S_ISREG (progress_stat.st_mode))
    progress_hint += progress_stat.st_size;

  if (guestfs_int_check_appliance_up (g, "upload") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "upload", "-1");
    return -1;
  }

  args.remotefilename = (char *) remotefilename;
  serial = guestfs_int_send (g, GUESTFS_PROC_UPLOAD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_upload_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "upload", "-1");
    return -1;
  }

  r = guestfs_int_send_file (g, filename);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "upload", "-1");
    /* daemon will send an error reply which we discard */
    guestfs_int_recv_discard (g, "upload");
    return -1;
  }
  if (r == -2) /* daemon cancelled */
    goto read_reply;

 read_reply:
  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "upload", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "upload", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_UPLOAD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "upload", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "upload", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "upload", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "upload",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "upload");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_download (guestfs_h *g,
                  const char *remotefilename,
                  const char *filename)
{
  struct guestfs_download_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "download", 8);
  if (remotefilename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "download", "remotefilename");
    return -1;
  }
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "download", "filename");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "download");
    fprintf (trace_buffer.fp, " \"%s\"", remotefilename);
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "download") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download", "-1");
    return -1;
  }

  args.remotefilename = (char *) remotefilename;
  serial = guestfs_int_send (g, GUESTFS_PROC_DOWNLOAD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_download_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "download", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_DOWNLOAD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "download", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "download",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, filename) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "download");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_tgz_in (guestfs_h *g,
                const char *tarball,
                const char *directory)
{
  struct guestfs_tgz_in_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  uint64_t progress_hint = 0;
  struct stat progress_stat;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "tgz_in", 6);
  if (tarball == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tgz_in", "tarball");
    return -1;
  }
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tgz_in", "directory");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "tgz_in");
    fprintf (trace_buffer.fp, " \"%s\"", tarball);
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (stat (tarball, &progress_stat) == 0 &&
      S_ISREG (progress_stat.st_mode))
    progress_hint += progress_stat.st_size;

  if (guestfs_int_check_appliance_up (g, "tgz_in") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_in", "-1");
    return -1;
  }

  args.directory = (char *) directory;
  serial = guestfs_int_send (g, GUESTFS_PROC_TGZ_IN,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_tgz_in_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_in", "-1");
    return -1;
  }

  r = guestfs_int_send_file (g, tarball);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_in", "-1");
    /* daemon will send an error reply which we discard */
    guestfs_int_recv_discard (g, "tgz_in");
    return -1;
  }
  if (r == -2) /* daemon cancelled */
    goto read_reply;

 read_reply:
  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "tgz_in", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_in", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TGZ_IN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_in", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_in", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "tgz_in", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "tgz_in",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "tgz_in");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mount_ro (guestfs_h *g,
                  const char *mountable,
                  const char *mountpoint)
{
  struct guestfs_mount_ro_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mount_ro", 8);
  if (mountable == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_ro", "mountable");
    return -1;
  }
  if (mountpoint == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_ro", "mountpoint");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mount_ro");
    fprintf (trace_buffer.fp, " \"%s\"", mountable);
    fprintf (trace_buffer.fp, " \"%s\"", mountpoint);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mount_ro") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_ro", "-1");
    return -1;
  }

  args.mountable = (char *) mountable;
  args.mountpoint = (char *) mountpoint;
  serial = guestfs_int_send (g, GUESTFS_PROC_MOUNT_RO,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mount_ro_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_ro", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mount_ro", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_ro", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MOUNT_RO, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_ro", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_ro", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mount_ro", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mount_ro",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mount_ro");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lvremove (guestfs_h *g,
                  const char *device)
{
  struct guestfs_lvremove_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lvremove", 8);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvremove", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvremove");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvremove") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvremove", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_LVREMOVE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lvremove_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvremove", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lvremove", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvremove", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVREMOVE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvremove", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvremove", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvremove", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvremove",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvremove");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_e2label (guestfs_h *g,
                     const char *device,
                     const char *label)
{
  struct guestfs_set_e2label_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_e2label", 11);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_e2label", "device");
    return -1;
  }
  if (label == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_e2label", "label");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_e2label");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"%s\"", label);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "set_e2label") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2label", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.label = (char *) label;
  serial = guestfs_int_send (g, GUESTFS_PROC_SET_E2LABEL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_set_e2label_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2label", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "set_e2label", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2label", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SET_E2LABEL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2label", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2label", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "set_e2label", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "set_e2label",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "set_e2label");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_cp (guestfs_h *g,
            const char *src,
            const char *dest)
{
  struct guestfs_cp_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "cp", 2);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "cp", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "cp", "dest");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "cp");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "cp") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  serial = guestfs_int_send (g, GUESTFS_PROC_CP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_cp_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "cp", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "cp", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "cp",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "cp");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mv (guestfs_h *g,
            const char *src,
            const char *dest)
{
  struct guestfs_mv_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mv", 2);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mv", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mv", "dest");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mv");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mv") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mv", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  serial = guestfs_int_send (g, GUESTFS_PROC_MV,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mv_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mv", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mv", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mv", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MV, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mv", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mv", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mv", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mv",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mv");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_pvresize (guestfs_h *g,
                  const char *device)
{
  struct guestfs_pvresize_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "pvresize", 8);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "pvresize", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "pvresize");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "pvresize") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_PVRESIZE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_pvresize_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "pvresize", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PVRESIZE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "pvresize", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "pvresize",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "pvresize");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_vg_activate_all (guestfs_h *g,
                         int activate)
{
  struct guestfs_vg_activate_all_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "vg_activate_all", 15);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vg_activate_all");
    fputs (activate ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vg_activate_all") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vg_activate_all", "-1");
    return -1;
  }

  args.activate = activate;
  serial = guestfs_int_send (g, GUESTFS_PROC_VG_ACTIVATE_ALL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_vg_activate_all_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vg_activate_all", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "vg_activate_all", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vg_activate_all", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VG_ACTIVATE_ALL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vg_activate_all", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vg_activate_all", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vg_activate_all", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vg_activate_all",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vg_activate_all");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_resize2fs (guestfs_h *g,
                   const char *device)
{
  struct guestfs_resize2fs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "resize2fs", 9);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "resize2fs", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "resize2fs");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "resize2fs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "resize2fs", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_RESIZE2FS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_resize2fs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "resize2fs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "resize2fs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "resize2fs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RESIZE2FS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "resize2fs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "resize2fs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "resize2fs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "resize2fs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "resize2fs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_sh_lines (guestfs_h *g,
                  const char *command)
{
  struct guestfs_sh_lines_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_sh_lines_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "sh_lines", 8);
  if (command == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "sh_lines", "command");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "sh_lines");
    fprintf (trace_buffer.fp, " \"%s\"", command);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "sh_lines") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh_lines", "NULL");
    return NULL;
  }

  args.command = (char *) command;
  serial = guestfs_int_send (g, GUESTFS_PROC_SH_LINES,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_sh_lines_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh_lines", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "sh_lines", &hdr, &err,
        (xdrproc_t) xdr_guestfs_sh_lines_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh_lines", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SH_LINES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh_lines", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh_lines", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "sh_lines", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "sh_lines",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.lines.lines_val =
    safe_realloc (g, ret.lines.lines_val,
                  sizeof (char *) * (ret.lines.lines_len + 1));
  ret.lines.lines_val[ret.lines.lines_len] = NULL;
  ret_v = ret.lines.lines_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "sh_lines");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_tail_n (guestfs_h *g,
                int nrlines,
                const char *path)
{
  struct guestfs_tail_n_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_tail_n_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "tail_n", 6);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tail_n", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "tail_n");
    fprintf (trace_buffer.fp, " %d", nrlines);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "tail_n") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail_n", "NULL");
    return NULL;
  }

  args.nrlines = nrlines;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_TAIL_N,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_tail_n_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail_n", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "tail_n", &hdr, &err,
        (xdrproc_t) xdr_guestfs_tail_n_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail_n", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TAIL_N, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail_n", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail_n", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "tail_n", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "tail_n",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.lines.lines_val =
    safe_realloc (g, ret.lines.lines_val,
                  sizeof (char *) * (ret.lines.lines_len + 1));
  ret.lines.lines_val[ret.lines.lines_len] = NULL;
  ret_v = ret.lines.lines_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "tail_n");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_df_h (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_df_h_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "df_h", 4);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "df_h");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "df_h") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df_h", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_DF_H, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df_h", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "df_h", &hdr, &err,
        (xdrproc_t) xdr_guestfs_df_h_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df_h", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_DF_H, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df_h", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df_h", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "df_h", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "df_h",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.output; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "df_h");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkswap_L (guestfs_h *g,
                  const char *label,
                  const char *device)
{
  struct guestfs_mkswap_L_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkswap_L", 8);
  if (label == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkswap_L", "label");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkswap_L", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkswap_L");
    fprintf (trace_buffer.fp, " \"%s\"", label);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkswap_L") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_L", "-1");
    return -1;
  }

  args.label = (char *) label;
  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKSWAP_L,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mkswap_L_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_L", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkswap_L", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_L", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKSWAP_L, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_L", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_L", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkswap_L", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkswap_L",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkswap_L");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_umask (guestfs_h *g,
               int mask)
{
  struct guestfs_umask_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_umask_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "umask", 5);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "umask");
    fprintf (trace_buffer.fp, " %d", mask);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "umask") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umask", "-1");
    return -1;
  }

  args.mask = mask;
  serial = guestfs_int_send (g, GUESTFS_PROC_UMASK,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_umask_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umask", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "umask", &hdr, &err,
        (xdrproc_t) xdr_guestfs_umask_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umask", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_UMASK, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umask", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umask", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "umask", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "umask",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.oldmask;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "umask");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_dirent_list *
guestfs_readdir (guestfs_h *g,
                 const char *dir)
{
  struct guestfs_readdir_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_readdir_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_dirent_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "readdir", 7);
  if (dir == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "readdir", "dir");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "readdir");
    fprintf (trace_buffer.fp, " \"%s\"", dir);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "readdir") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readdir", "NULL");
    return NULL;
  }

  args.dir = (char *) dir;
  serial = guestfs_int_send (g, GUESTFS_PROC_READDIR,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_readdir_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readdir", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "readdir", &hdr, &err,
        (xdrproc_t) xdr_guestfs_readdir_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readdir", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_READDIR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readdir", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readdir", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "readdir", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "readdir",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.entries, sizeof (ret.entries));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "readdir");
    fprintf (trace_buffer.fp, "<struct guestfs_dirent_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_xattr_list *
guestfs_lgetxattrs (guestfs_h *g,
                    const char *path)
{
  struct guestfs_lgetxattrs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_lgetxattrs_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_xattr_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lgetxattrs", 10);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lgetxattrs", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lgetxattrs");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lgetxattrs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lgetxattrs", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_LGETXATTRS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lgetxattrs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lgetxattrs", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "lgetxattrs", &hdr, &err,
        (xdrproc_t) xdr_guestfs_lgetxattrs_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lgetxattrs", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LGETXATTRS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lgetxattrs", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lgetxattrs", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lgetxattrs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lgetxattrs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.xattrs, sizeof (ret.xattrs));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lgetxattrs");
    fprintf (trace_buffer.fp, "<struct guestfs_xattr_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_fgrep (guestfs_h *g,
               const char *pattern,
               const char *path)
{
  struct guestfs_fgrep_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_fgrep_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "fgrep", 5);
  if (pattern == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "fgrep", "pattern");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "fgrep", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "fgrep");
    fprintf (trace_buffer.fp, " \"%s\"", pattern);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "fgrep") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fgrep", "NULL");
    return NULL;
  }

  args.pattern = (char *) pattern;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_FGREP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_fgrep_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fgrep", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "fgrep", &hdr, &err,
        (xdrproc_t) xdr_guestfs_fgrep_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fgrep", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FGREP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fgrep", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fgrep", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "fgrep", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "fgrep",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.lines.lines_val =
    safe_realloc (g, ret.lines.lines_val,
                  sizeof (char *) * (ret.lines.lines_len + 1));
  ret.lines.lines_val[ret.lines.lines_len] = NULL;
  ret_v = ret.lines.lines_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "fgrep");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_zegrep (guestfs_h *g,
                const char *regex,
                const char *path)
{
  struct guestfs_zegrep_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_zegrep_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "zegrep", 6);
  if (regex == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zegrep", "regex");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zegrep", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "zegrep");
    fprintf (trace_buffer.fp, " \"%s\"", regex);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "zegrep") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrep", "NULL");
    return NULL;
  }

  args.regex = (char *) regex;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_ZEGREP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_zegrep_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrep", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "zegrep", &hdr, &err,
        (xdrproc_t) xdr_guestfs_zegrep_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrep", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ZEGREP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrep", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrep", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "zegrep", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "zegrep",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.lines.lines_val =
    safe_realloc (g, ret.lines.lines_val,
                  sizeof (char *) * (ret.lines.lines_len + 1));
  ret.lines.lines_val[ret.lines.lines_len] = NULL;
  ret_v = ret.lines.lines_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "zegrep");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ln_s (guestfs_h *g,
              const char *target,
              const char *linkname)
{
  struct guestfs_ln_s_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ln_s", 4);
  if (target == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ln_s", "target");
    return -1;
  }
  if (linkname == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ln_s", "linkname");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ln_s");
    fprintf (trace_buffer.fp, " \"%s\"", target);
    fprintf (trace_buffer.fp, " \"%s\"", linkname);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ln_s") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_s", "-1");
    return -1;
  }

  args.target = (char *) target;
  args.linkname = (char *) linkname;
  serial = guestfs_int_send (g, GUESTFS_PROC_LN_S,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ln_s_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_s", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ln_s", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_s", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LN_S, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_s", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_s", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ln_s", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ln_s",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ln_s");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mke2journal_U (guestfs_h *g,
                       int blocksize,
                       const char *uuid,
                       const char *device)
{
  struct guestfs_mke2journal_U_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mke2journal_U", 13);
  if (uuid == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2journal_U", "uuid");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2journal_U", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mke2journal_U");
    fprintf (trace_buffer.fp, " %d", blocksize);
    fprintf (trace_buffer.fp, " \"%s\"", uuid);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mke2journal_U") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal_U", "-1");
    return -1;
  }

  args.blocksize = blocksize;
  args.uuid = (char *) uuid;
  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKE2JOURNAL_U,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mke2journal_U_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal_U", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mke2journal_U", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal_U", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKE2JOURNAL_U, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal_U", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal_U", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mke2journal_U", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mke2journal_U",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mke2journal_U");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mke2fs_J (guestfs_h *g,
                  const char *fstype,
                  int blocksize,
                  const char *device,
                  const char *journal)
{
  struct guestfs_mke2fs_J_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mke2fs_J", 8);
  if (fstype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_J", "fstype");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_J", "device");
    return -1;
  }
  if (journal == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_J", "journal");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mke2fs_J");
    fprintf (trace_buffer.fp, " \"%s\"", fstype);
    fprintf (trace_buffer.fp, " %d", blocksize);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"%s\"", journal);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mke2fs_J") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_J", "-1");
    return -1;
  }

  args.fstype = (char *) fstype;
  args.blocksize = blocksize;
  args.device = (char *) device;
  args.journal = (char *) journal;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKE2FS_J,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mke2fs_J_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_J", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mke2fs_J", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_J", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKE2FS_J, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_J", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_J", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mke2fs_J", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mke2fs_J",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mke2fs_J");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mke2fs_JL (guestfs_h *g,
                   const char *fstype,
                   int blocksize,
                   const char *device,
                   const char *label)
{
  struct guestfs_mke2fs_JL_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mke2fs_JL", 9);
  if (fstype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_JL", "fstype");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_JL", "device");
    return -1;
  }
  if (label == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_JL", "label");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mke2fs_JL");
    fprintf (trace_buffer.fp, " \"%s\"", fstype);
    fprintf (trace_buffer.fp, " %d", blocksize);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"%s\"", label);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mke2fs_JL") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JL", "-1");
    return -1;
  }

  args.fstype = (char *) fstype;
  args.blocksize = blocksize;
  args.device = (char *) device;
  args.label = (char *) label;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKE2FS_JL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mke2fs_JL_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JL", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mke2fs_JL", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JL", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKE2FS_JL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JL", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JL", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mke2fs_JL", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mke2fs_JL",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mke2fs_JL");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_vfs_type (guestfs_h *g,
                  const char *mountable)
{
  struct guestfs_vfs_type_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_vfs_type_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "vfs_type", 8);
  if (mountable == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vfs_type", "mountable");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vfs_type");
    fprintf (trace_buffer.fp, " \"%s\"", mountable);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vfs_type") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vfs_type", "NULL");
    return NULL;
  }

  args.mountable = (char *) mountable;
  serial = guestfs_int_send (g, GUESTFS_PROC_VFS_TYPE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_vfs_type_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vfs_type", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "vfs_type", &hdr, &err,
        (xdrproc_t) xdr_guestfs_vfs_type_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vfs_type", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VFS_TYPE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vfs_type", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vfs_type", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vfs_type", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vfs_type",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.fstype; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vfs_type");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_dd (guestfs_h *g,
            const char *src,
            const char *dest)
{
  struct guestfs_dd_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "dd", 2);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "dd", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "dd", "dest");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "dd");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "dd") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "dd", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  serial = guestfs_int_send (g, GUESTFS_PROC_DD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_dd_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "dd", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "dd", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "dd", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_DD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "dd", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "dd", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "dd", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "dd",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "dd");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_zero_device (guestfs_h *g,
                     const char *device)
{
  struct guestfs_zero_device_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "zero_device", 11);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zero_device", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "zero_device");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "zero_device") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_device", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_ZERO_DEVICE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_zero_device_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_device", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "zero_device", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_device", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ZERO_DEVICE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_device", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_device", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "zero_device", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "zero_device",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "zero_device");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lvresize_free (guestfs_h *g,
                       const char *lv,
                       int percent)
{
  struct guestfs_lvresize_free_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lvresize_free", 13);
  if (lv == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvresize_free", "lv");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvresize_free");
    fprintf (trace_buffer.fp, " \"%s\"", lv);
    fprintf (trace_buffer.fp, " %d", percent);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvresize_free") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize_free", "-1");
    return -1;
  }

  args.lv = (char *) lv;
  args.percent = percent;
  serial = guestfs_int_send (g, GUESTFS_PROC_LVRESIZE_FREE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lvresize_free_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize_free", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lvresize_free", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize_free", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVRESIZE_FREE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize_free", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize_free", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvresize_free", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvresize_free",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvresize_free");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_fill_pattern (guestfs_h *g,
                      const char *pattern,
                      int len,
                      const char *path)
{
  struct guestfs_fill_pattern_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "fill_pattern", 12);
  if (pattern == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "fill_pattern", "pattern");
    return -1;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "fill_pattern", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "fill_pattern");
    fprintf (trace_buffer.fp, " \"%s\"", pattern);
    fprintf (trace_buffer.fp, " %d", len);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "fill_pattern") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill_pattern", "-1");
    return -1;
  }

  args.pattern = (char *) pattern;
  args.len = len;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_FILL_PATTERN,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_fill_pattern_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill_pattern", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "fill_pattern", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill_pattern", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FILL_PATTERN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill_pattern", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill_pattern", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "fill_pattern", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "fill_pattern",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "fill_pattern");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_internal_write (guestfs_h *g,
                        const char *path,
                        const char *content,
                        size_t content_size)
{
  struct guestfs_internal_write_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_write", 14);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_write", "path");
    return -1;
  }
  if (content == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_write", "content");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_write");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fputc (' ', trace_buffer.fp);
    guestfs_int_print_BufferIn (trace_buffer.fp, content, content_size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "internal_write") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_write", "-1");
    return -1;
  }

  args.path = (char *) path;
  /* Just catch grossly large sizes. XDR encoding will make this precise. */
  if (content_size >= GUESTFS_MESSAGE_MAX) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_write", "-1");
    error (g, "%s: size of input buffer too large", "internal_write");
    return -1;
  }
  args.content.content_val = (char *) content;
  args.content.content_len = content_size;
  serial = guestfs_int_send (g, GUESTFS_PROC_INTERNAL_WRITE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_internal_write_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_write", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "internal_write", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_write", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INTERNAL_WRITE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_write", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_write", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "internal_write", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "internal_write",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "internal_write");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ntfsresize_size (guestfs_h *g,
                         const char *device,
                         int64_t size)
{
  struct guestfs_ntfsresize_size_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ntfsresize_size", 15);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ntfsresize_size", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ntfsresize_size");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %" PRIi64, size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ntfsresize_size") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize_size", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.size = size;
  serial = guestfs_int_send (g, GUESTFS_PROC_NTFSRESIZE_SIZE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ntfsresize_size_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize_size", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ntfsresize_size", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize_size", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_NTFSRESIZE_SIZE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize_size", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize_size", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ntfsresize_size", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ntfsresize_size",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ntfsresize_size");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_symlink (guestfs_h *g,
                    const char *path)
{
  struct guestfs_is_symlink_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_symlink_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_symlink", 10);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_symlink", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_symlink");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_symlink") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_symlink", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_SYMLINK,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_is_symlink_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_symlink", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_symlink", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_symlink_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_symlink", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_SYMLINK, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_symlink", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_symlink", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_symlink", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_symlink",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.flag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_symlink");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_download_offset (guestfs_h *g,
                         const char *remotefilename,
                         const char *filename,
                         int64_t offset,
                         int64_t size)
{
  struct guestfs_download_offset_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "download_offset", 15);
  if (remotefilename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "download_offset", "remotefilename");
    return -1;
  }
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "download_offset", "filename");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "download_offset");
    fprintf (trace_buffer.fp, " \"%s\"", remotefilename);
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    fprintf (trace_buffer.fp, " %" PRIi64, offset);
    fprintf (trace_buffer.fp, " %" PRIi64, size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "download_offset") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download_offset", "-1");
    return -1;
  }

  args.remotefilename = (char *) remotefilename;
  args.offset = offset;
  args.size = size;
  serial = guestfs_int_send (g, GUESTFS_PROC_DOWNLOAD_OFFSET,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_download_offset_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download_offset", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "download_offset", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download_offset", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_DOWNLOAD_OFFSET, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download_offset", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download_offset", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "download_offset", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "download_offset",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, filename) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "download_offset", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "download_offset");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_getxattr (guestfs_h *g,
                  const char *path,
                  const char *name,
                  size_t *size_r)
{
  struct guestfs_getxattr_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_getxattr_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "getxattr", 8);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "getxattr", "path");
    return NULL;
  }
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "getxattr", "name");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "getxattr");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " \"%s\"", name);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "getxattr") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattr", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  args.name = (char *) name;
  serial = guestfs_int_send (g, GUESTFS_PROC_GETXATTR,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_getxattr_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattr", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "getxattr", &hdr, &err,
        (xdrproc_t) xdr_guestfs_getxattr_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattr", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_GETXATTR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattr", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattr", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "getxattr", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "getxattr",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* RBufferOut is tricky: If the buffer is zero-length, then
   * _val might be NULL here.  To make the API saner for
   * callers, we turn this case into a unique pointer (using
   * malloc(1)).
   */
  if (ret.xattr.xattr_len > 0) {
    *size_r = ret.xattr.xattr_len;
    ret_v = ret.xattr.xattr_val; /* caller will free */
  } else {
    free (ret.xattr.xattr_val);
    char *p = safe_malloc (g, 1);
    *size_r = ret.xattr.xattr_len;
    ret_v = p;
  }
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "getxattr");
    guestfs_int_print_BufferOut (trace_buffer.fp, ret_v, *size_r);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_list_dm_devices (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_list_dm_devices_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "list_dm_devices", 15);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "list_dm_devices");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "list_dm_devices") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_dm_devices", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LIST_DM_DEVICES, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_dm_devices", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "list_dm_devices", &hdr, &err,
        (xdrproc_t) xdr_guestfs_list_dm_devices_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_dm_devices", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LIST_DM_DEVICES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_dm_devices", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_dm_devices", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "list_dm_devices", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "list_dm_devices",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.devices.devices_val =
    safe_realloc (g, ret.devices.devices_val,
                  sizeof (char *) * (ret.devices.devices_len + 1));
  ret.devices.devices_val[ret.devices.devices_len] = NULL;
  ret_v = ret.devices.devices_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "list_dm_devices");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_compress_out_argv (guestfs_h *g,
                           const char *ctype,
                           const char *file,
                           const char *zfile,
                           const struct guestfs_compress_out_argv *optargs)
{
  struct guestfs_compress_out_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_compress_out_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "compress_out", 12);
  if (ctype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "compress_out", "ctype");
    return -1;
  }
  if (file == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "compress_out", "file");
    return -1;
  }
  if (zfile == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "compress_out", "zfile");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "compress_out", "compress_out");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "compress_out");
    fprintf (trace_buffer.fp, " \"%s\"", ctype);
    fprintf (trace_buffer.fp, " \"%s\"", file);
    fprintf (trace_buffer.fp, " \"%s\"", zfile);
    if (optargs->bitmask & GUESTFS_COMPRESS_OUT_LEVEL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "level", optargs->level);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "compress_out") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "compress_out", "-1");
    return -1;
  }

  args.ctype = (char *) ctype;
  args.file = (char *) file;
  if (optargs->bitmask & GUESTFS_COMPRESS_OUT_LEVEL_BITMASK) {
    args.level = optargs->level;
  } else {
    args.level = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_COMPRESS_OUT,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_compress_out_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "compress_out", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "compress_out", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "compress_out", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COMPRESS_OUT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "compress_out", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "compress_out", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "compress_out", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "compress_out",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, zfile) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "compress_out", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "compress_out");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_part_to_partnum (guestfs_h *g,
                         const char *partition)
{
  struct guestfs_part_to_partnum_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_part_to_partnum_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_to_partnum", 15);
  if (partition == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_to_partnum", "partition");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_to_partnum");
    fprintf (trace_buffer.fp, " \"%s\"", partition);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_to_partnum") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_partnum", "-1");
    return -1;
  }

  args.partition = (char *) partition;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_TO_PARTNUM,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_to_partnum_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_partnum", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "part_to_partnum", &hdr, &err,
        (xdrproc_t) xdr_guestfs_part_to_partnum_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_partnum", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_TO_PARTNUM, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_partnum", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_partnum", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_to_partnum", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_to_partnum",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.partnum;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_to_partnum");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_copy_file_to_file_argv (guestfs_h *g,
                                const char *src,
                                const char *dest,
                                const struct guestfs_copy_file_to_file_argv *optargs)
{
  struct guestfs_copy_file_to_file_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_copy_file_to_file_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "copy_file_to_file", 17);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_file_to_file", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_file_to_file", "dest");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffffe0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "copy_file_to_file", "copy_file_to_file");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "copy_file_to_file");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_SRCOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "srcoffset", optargs->srcoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_DESTOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "destoffset", optargs->destoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_SIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "size", optargs->size);
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_SPARSE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "sparse", optargs->sparse ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_APPEND_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "append", optargs->append ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "copy_file_to_file") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_file", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_SRCOFFSET_BITMASK) {
    args.srcoffset = optargs->srcoffset;
  } else {
    args.srcoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_DESTOFFSET_BITMASK) {
    args.destoffset = optargs->destoffset;
  } else {
    args.destoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_SIZE_BITMASK) {
    args.size = optargs->size;
  } else {
    args.size = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_SPARSE_BITMASK) {
    args.sparse = optargs->sparse;
  } else {
    args.sparse = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_FILE_APPEND_BITMASK) {
    args.append = optargs->append;
  } else {
    args.append = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_COPY_FILE_TO_FILE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_copy_file_to_file_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_file", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "copy_file_to_file", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_file", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COPY_FILE_TO_FILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_file", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_file", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "copy_file_to_file", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "copy_file_to_file",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "copy_file_to_file");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_e2fsck_argv (guestfs_h *g,
                     const char *device,
                     const struct guestfs_e2fsck_argv *optargs)
{
  struct guestfs_e2fsck_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_e2fsck_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "e2fsck", 6);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "e2fsck", "device");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "e2fsck", "e2fsck");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "e2fsck");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_E2FSCK_CORRECT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "correct", optargs->correct ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_E2FSCK_FORCEALL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "forceall", optargs->forceall ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "e2fsck") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_E2FSCK_CORRECT_BITMASK) {
    args.correct = optargs->correct;
  } else {
    args.correct = 0;
  }
  if (optargs->bitmask & GUESTFS_E2FSCK_FORCEALL_BITMASK) {
    args.forceall = optargs->forceall;
  } else {
    args.forceall = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_E2FSCK,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_e2fsck_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "e2fsck", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_E2FSCK, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "e2fsck", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "e2fsck",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "e2fsck");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_zero_free_space (guestfs_h *g,
                         const char *directory)
{
  struct guestfs_zero_free_space_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "zero_free_space", 15);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zero_free_space", "directory");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "zero_free_space");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "zero_free_space") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_free_space", "-1");
    return -1;
  }

  args.directory = (char *) directory;
  serial = guestfs_int_send (g, GUESTFS_PROC_ZERO_FREE_SPACE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_zero_free_space_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_free_space", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "zero_free_space", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_free_space", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ZERO_FREE_SPACE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_free_space", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zero_free_space", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "zero_free_space", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "zero_free_space",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "zero_free_space");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_filesystem_balance (guestfs_h *g,
                                  const char *fs)
{
  struct guestfs_btrfs_filesystem_balance_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_filesystem_balance", 24);
  if (fs == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_filesystem_balance", "fs");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_filesystem_balance");
    fprintf (trace_buffer.fp, " \"%s\"", fs);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_filesystem_balance") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_balance", "-1");
    return -1;
  }

  args.fs = (char *) fs;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_FILESYSTEM_BALANCE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_filesystem_balance_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_balance", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_filesystem_balance", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_balance", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_FILESYSTEM_BALANCE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_balance", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_balance", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_filesystem_balance", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_filesystem_balance",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_filesystem_balance");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_set_seeding (guestfs_h *g,
                           const char *device,
                           int seeding)
{
  struct guestfs_btrfs_set_seeding_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_set_seeding", 17);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_set_seeding", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_set_seeding");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fputs (seeding ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_set_seeding") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_set_seeding", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.seeding = seeding;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SET_SEEDING,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_set_seeding_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_set_seeding", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_set_seeding", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_set_seeding", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SET_SEEDING, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_set_seeding", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_set_seeding", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_set_seeding", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_set_seeding",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_set_seeding");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_fstrim_argv (guestfs_h *g,
                     const char *mountpoint,
                     const struct guestfs_fstrim_argv *optargs)
{
  struct guestfs_fstrim_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_fstrim_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "fstrim", 6);
  if (mountpoint == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "fstrim", "mountpoint");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffff8)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "fstrim", "fstrim");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "fstrim");
    fprintf (trace_buffer.fp, " \"%s\"", mountpoint);
    if (optargs->bitmask & GUESTFS_FSTRIM_OFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "offset", optargs->offset);
    }
    if (optargs->bitmask & GUESTFS_FSTRIM_LENGTH_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "length", optargs->length);
    }
    if (optargs->bitmask & GUESTFS_FSTRIM_MINIMUMFREEEXTENT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "minimumfreeextent", optargs->minimumfreeextent);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "fstrim") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fstrim", "-1");
    return -1;
  }

  args.mountpoint = (char *) mountpoint;
  if (optargs->bitmask & GUESTFS_FSTRIM_OFFSET_BITMASK) {
    args.offset = optargs->offset;
  } else {
    args.offset = 0;
  }
  if (optargs->bitmask & GUESTFS_FSTRIM_LENGTH_BITMASK) {
    args.length = optargs->length;
  } else {
    args.length = 0;
  }
  if (optargs->bitmask & GUESTFS_FSTRIM_MINIMUMFREEEXTENT_BITMASK) {
    args.minimumfreeextent = optargs->minimumfreeextent;
  } else {
    args.minimumfreeextent = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_FSTRIM,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_fstrim_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fstrim", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "fstrim", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fstrim", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FSTRIM, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fstrim", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fstrim", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "fstrim", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "fstrim",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "fstrim");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_nr_devices (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_nr_devices_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "nr_devices", 10);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "nr_devices");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "nr_devices") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "nr_devices", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_NR_DEVICES, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "nr_devices", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "nr_devices", &hdr, &err,
        (xdrproc_t) xdr_guestfs_nr_devices_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "nr_devices", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_NR_DEVICES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "nr_devices", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "nr_devices", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "nr_devices", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "nr_devices",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.nrdisks;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "nr_devices");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_rsync_in_argv (guestfs_h *g,
                       const char *remote,
                       const char *dest,
                       const struct guestfs_rsync_in_argv *optargs)
{
  struct guestfs_rsync_in_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_rsync_in_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "rsync_in", 8);
  if (remote == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rsync_in", "remote");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rsync_in", "dest");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "rsync_in", "rsync_in");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "rsync_in");
    fprintf (trace_buffer.fp, " \"%s\"", remote);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_RSYNC_IN_ARCHIVE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "archive", optargs->archive ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_RSYNC_IN_DELETEDEST_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "deletedest", optargs->deletedest ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "rsync_in") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_in", "-1");
    return -1;
  }

  args.remote = (char *) remote;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_RSYNC_IN_ARCHIVE_BITMASK) {
    args.archive = optargs->archive;
  } else {
    args.archive = 0;
  }
  if (optargs->bitmask & GUESTFS_RSYNC_IN_DELETEDEST_BITMASK) {
    args.deletedest = optargs->deletedest;
  } else {
    args.deletedest = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_RSYNC_IN,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_rsync_in_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_in", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "rsync_in", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_in", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RSYNC_IN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_in", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_in", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "rsync_in", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "rsync_in",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "rsync_in");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ls0 (guestfs_h *g,
             const char *dir,
             const char *filenames)
{
  struct guestfs_ls0_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ls0", 3);
  if (dir == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ls0", "dir");
    return -1;
  }
  if (filenames == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ls0", "filenames");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ls0");
    fprintf (trace_buffer.fp, " \"%s\"", dir);
    fprintf (trace_buffer.fp, " \"%s\"", filenames);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ls0") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ls0", "-1");
    return -1;
  }

  args.dir = (char *) dir;
  serial = guestfs_int_send (g, GUESTFS_PROC_LS0,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ls0_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ls0", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ls0", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ls0", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LS0, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ls0", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ls0", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ls0", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ls0",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, filenames) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ls0", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ls0");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_xfs_repair_argv (guestfs_h *g,
                         const char *device,
                         const struct guestfs_xfs_repair_argv *optargs)
{
  struct guestfs_xfs_repair_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_xfs_repair_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_xfs_repair_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "xfs_repair", 10);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "xfs_repair", "device");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_XFS_REPAIR_LOGDEV_BITMASK) &&
      optargs->logdev == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "xfs_repair", "logdev");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_XFS_REPAIR_RTDEV_BITMASK) &&
      optargs->rtdev == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "xfs_repair", "rtdev");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffc00)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "xfs_repair", "xfs_repair");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "xfs_repair");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_FORCELOGZERO_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "forcelogzero", optargs->forcelogzero ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_NOMODIFY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "nomodify", optargs->nomodify ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_NOPREFETCH_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "noprefetch", optargs->noprefetch ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_FORCEGEOMETRY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "forcegeometry", optargs->forcegeometry ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_MAXMEM_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "maxmem", optargs->maxmem);
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_IHASHSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "ihashsize", optargs->ihashsize);
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_BHASHSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "bhashsize", optargs->bhashsize);
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_AGSTRIDE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "agstride", optargs->agstride);
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_LOGDEV_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "logdev", optargs->logdev);
    }
    if (optargs->bitmask & GUESTFS_XFS_REPAIR_RTDEV_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "rtdev", optargs->rtdev);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "xfs_repair") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_repair", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_FORCELOGZERO_BITMASK) {
    args.forcelogzero = optargs->forcelogzero;
  } else {
    args.forcelogzero = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_NOMODIFY_BITMASK) {
    args.nomodify = optargs->nomodify;
  } else {
    args.nomodify = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_NOPREFETCH_BITMASK) {
    args.noprefetch = optargs->noprefetch;
  } else {
    args.noprefetch = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_FORCEGEOMETRY_BITMASK) {
    args.forcegeometry = optargs->forcegeometry;
  } else {
    args.forcegeometry = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_MAXMEM_BITMASK) {
    args.maxmem = optargs->maxmem;
  } else {
    args.maxmem = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_IHASHSIZE_BITMASK) {
    args.ihashsize = optargs->ihashsize;
  } else {
    args.ihashsize = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_BHASHSIZE_BITMASK) {
    args.bhashsize = optargs->bhashsize;
  } else {
    args.bhashsize = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_AGSTRIDE_BITMASK) {
    args.agstride = optargs->agstride;
  } else {
    args.agstride = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_LOGDEV_BITMASK) {
    args.logdev = (char *) optargs->logdev;
  } else {
    args.logdev = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_XFS_REPAIR_RTDEV_BITMASK) {
    args.rtdev = (char *) optargs->rtdev;
  } else {
    args.rtdev = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_XFS_REPAIR,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_xfs_repair_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_repair", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "xfs_repair", &hdr, &err,
        (xdrproc_t) xdr_guestfs_xfs_repair_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_repair", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_XFS_REPAIR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_repair", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_repair", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "xfs_repair", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "xfs_repair",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.status;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "xfs_repair");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mke2fs_argv (guestfs_h *g,
                     const char *device,
                     const struct guestfs_mke2fs_argv *optargs)
{
  struct guestfs_mke2fs_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_mke2fs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mke2fs", 6);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs", "device");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKE2FS_JOURNALDEVICE_BITMASK) &&
      optargs->journaldevice == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mke2fs", "journaldevice");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKE2FS_LABEL_BITMASK) &&
      optargs->label == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mke2fs", "label");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKE2FS_LASTMOUNTEDDIR_BITMASK) &&
      optargs->lastmounteddir == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mke2fs", "lastmounteddir");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKE2FS_CREATOROS_BITMASK) &&
      optargs->creatoros == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mke2fs", "creatoros");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKE2FS_FSTYPE_BITMASK) &&
      optargs->fstype == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mke2fs", "fstype");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKE2FS_USAGETYPE_BITMASK) &&
      optargs->usagetype == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mke2fs", "usagetype");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKE2FS_UUID_BITMASK) &&
      optargs->uuid == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mke2fs", "uuid");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffc000000000)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "mke2fs", "mke2fs");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mke2fs");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_MKE2FS_BLOCKSCOUNT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "blockscount", optargs->blockscount);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_BLOCKSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "blocksize", optargs->blocksize);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_FRAGSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "fragsize", optargs->fragsize);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_BLOCKSPERGROUP_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "blockspergroup", optargs->blockspergroup);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_NUMBEROFGROUPS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "numberofgroups", optargs->numberofgroups);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_BYTESPERINODE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "bytesperinode", optargs->bytesperinode);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_INODESIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "inodesize", optargs->inodesize);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_JOURNALSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "journalsize", optargs->journalsize);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_NUMBEROFINODES_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "numberofinodes", optargs->numberofinodes);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_STRIDESIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "stridesize", optargs->stridesize);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_STRIPEWIDTH_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "stripewidth", optargs->stripewidth);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_MAXONLINERESIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "maxonlineresize", optargs->maxonlineresize);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "reservedblockspercentage", optargs->reservedblockspercentage);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_MMPUPDATEINTERVAL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "mmpupdateinterval", optargs->mmpupdateinterval);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_JOURNALDEVICE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "journaldevice", optargs->journaldevice);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_LABEL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "label", optargs->label);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_LASTMOUNTEDDIR_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "lastmounteddir", optargs->lastmounteddir);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_CREATOROS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "creatoros", optargs->creatoros);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_FSTYPE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "fstype", optargs->fstype);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_USAGETYPE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "usagetype", optargs->usagetype);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_UUID_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "uuid", optargs->uuid);
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_FORCECREATE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "forcecreate", optargs->forcecreate ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_WRITESBANDGROUPONLY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "writesbandgrouponly", optargs->writesbandgrouponly ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_LAZYITABLEINIT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "lazyitableinit", optargs->lazyitableinit ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_LAZYJOURNALINIT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "lazyjournalinit", optargs->lazyjournalinit ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_TESTFS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "testfs", optargs->testfs ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_DISCARD_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "discard", optargs->discard ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_QUOTATYPE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "quotatype", optargs->quotatype ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_EXTENT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "extent", optargs->extent ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_FILETYPE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "filetype", optargs->filetype ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_FLEXBG_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "flexbg", optargs->flexbg ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_HASJOURNAL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "hasjournal", optargs->hasjournal ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_JOURNALDEV_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "journaldev", optargs->journaldev ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_LARGEFILE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "largefile", optargs->largefile ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_QUOTA_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "quota", optargs->quota ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_RESIZEINODE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "resizeinode", optargs->resizeinode ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_SPARSESUPER_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "sparsesuper", optargs->sparsesuper ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MKE2FS_UNINITBG_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "uninitbg", optargs->uninitbg ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mke2fs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_MKE2FS_BLOCKSCOUNT_BITMASK) {
    args.blockscount = optargs->blockscount;
  } else {
    args.blockscount = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_BLOCKSIZE_BITMASK) {
    args.blocksize = optargs->blocksize;
  } else {
    args.blocksize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_FRAGSIZE_BITMASK) {
    args.fragsize = optargs->fragsize;
  } else {
    args.fragsize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_BLOCKSPERGROUP_BITMASK) {
    args.blockspergroup = optargs->blockspergroup;
  } else {
    args.blockspergroup = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_NUMBEROFGROUPS_BITMASK) {
    args.numberofgroups = optargs->numberofgroups;
  } else {
    args.numberofgroups = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_BYTESPERINODE_BITMASK) {
    args.bytesperinode = optargs->bytesperinode;
  } else {
    args.bytesperinode = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_INODESIZE_BITMASK) {
    args.inodesize = optargs->inodesize;
  } else {
    args.inodesize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_JOURNALSIZE_BITMASK) {
    args.journalsize = optargs->journalsize;
  } else {
    args.journalsize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_NUMBEROFINODES_BITMASK) {
    args.numberofinodes = optargs->numberofinodes;
  } else {
    args.numberofinodes = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_STRIDESIZE_BITMASK) {
    args.stridesize = optargs->stridesize;
  } else {
    args.stridesize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_STRIPEWIDTH_BITMASK) {
    args.stripewidth = optargs->stripewidth;
  } else {
    args.stripewidth = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_MAXONLINERESIZE_BITMASK) {
    args.maxonlineresize = optargs->maxonlineresize;
  } else {
    args.maxonlineresize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK) {
    args.reservedblockspercentage = optargs->reservedblockspercentage;
  } else {
    args.reservedblockspercentage = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_MMPUPDATEINTERVAL_BITMASK) {
    args.mmpupdateinterval = optargs->mmpupdateinterval;
  } else {
    args.mmpupdateinterval = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_JOURNALDEVICE_BITMASK) {
    args.journaldevice = (char *) optargs->journaldevice;
  } else {
    args.journaldevice = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_LABEL_BITMASK) {
    args.label = (char *) optargs->label;
  } else {
    args.label = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_LASTMOUNTEDDIR_BITMASK) {
    args.lastmounteddir = (char *) optargs->lastmounteddir;
  } else {
    args.lastmounteddir = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_CREATOROS_BITMASK) {
    args.creatoros = (char *) optargs->creatoros;
  } else {
    args.creatoros = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_FSTYPE_BITMASK) {
    args.fstype = (char *) optargs->fstype;
  } else {
    args.fstype = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_USAGETYPE_BITMASK) {
    args.usagetype = (char *) optargs->usagetype;
  } else {
    args.usagetype = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_UUID_BITMASK) {
    args.uuid = (char *) optargs->uuid;
  } else {
    args.uuid = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_FORCECREATE_BITMASK) {
    args.forcecreate = optargs->forcecreate;
  } else {
    args.forcecreate = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_WRITESBANDGROUPONLY_BITMASK) {
    args.writesbandgrouponly = optargs->writesbandgrouponly;
  } else {
    args.writesbandgrouponly = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_LAZYITABLEINIT_BITMASK) {
    args.lazyitableinit = optargs->lazyitableinit;
  } else {
    args.lazyitableinit = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_LAZYJOURNALINIT_BITMASK) {
    args.lazyjournalinit = optargs->lazyjournalinit;
  } else {
    args.lazyjournalinit = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_TESTFS_BITMASK) {
    args.testfs = optargs->testfs;
  } else {
    args.testfs = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_DISCARD_BITMASK) {
    args.discard = optargs->discard;
  } else {
    args.discard = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_QUOTATYPE_BITMASK) {
    args.quotatype = optargs->quotatype;
  } else {
    args.quotatype = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_EXTENT_BITMASK) {
    args.extent = optargs->extent;
  } else {
    args.extent = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_FILETYPE_BITMASK) {
    args.filetype = optargs->filetype;
  } else {
    args.filetype = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_FLEXBG_BITMASK) {
    args.flexbg = optargs->flexbg;
  } else {
    args.flexbg = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_HASJOURNAL_BITMASK) {
    args.hasjournal = optargs->hasjournal;
  } else {
    args.hasjournal = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_JOURNALDEV_BITMASK) {
    args.journaldev = optargs->journaldev;
  } else {
    args.journaldev = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_LARGEFILE_BITMASK) {
    args.largefile = optargs->largefile;
  } else {
    args.largefile = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_QUOTA_BITMASK) {
    args.quota = optargs->quota;
  } else {
    args.quota = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_RESIZEINODE_BITMASK) {
    args.resizeinode = optargs->resizeinode;
  } else {
    args.resizeinode = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_SPARSESUPER_BITMASK) {
    args.sparsesuper = optargs->sparsesuper;
  } else {
    args.sparsesuper = 0;
  }
  if (optargs->bitmask & GUESTFS_MKE2FS_UNINITBG_BITMASK) {
    args.uninitbg = optargs->uninitbg;
  } else {
    args.uninitbg = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_MKE2FS,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_mke2fs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mke2fs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKE2FS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mke2fs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mke2fs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mke2fs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_ldmtool_scan_devices (guestfs_h *g,
                              char *const *devices)
{
  struct guestfs_ldmtool_scan_devices_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_ldmtool_scan_devices_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ldmtool_scan_devices", 20);
  if (devices == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_scan_devices", "devices");
    return NULL;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ldmtool_scan_devices");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; devices[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (devices[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ldmtool_scan_devices") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_scan_devices", "NULL");
    return NULL;
  }

  args.devices.devices_val = (char **) devices;
  for (args.devices.devices_len = 0; devices[args.devices.devices_len]; args.devices.devices_len++) ;
  serial = guestfs_int_send (g, GUESTFS_PROC_LDMTOOL_SCAN_DEVICES,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ldmtool_scan_devices_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_scan_devices", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "ldmtool_scan_devices", &hdr, &err,
        (xdrproc_t) xdr_guestfs_ldmtool_scan_devices_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_scan_devices", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LDMTOOL_SCAN_DEVICES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_scan_devices", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_scan_devices", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ldmtool_scan_devices", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ldmtool_scan_devices",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.guids.guids_val =
    safe_realloc (g, ret.guids.guids_val,
                  sizeof (char *) * (ret.guids.guids_len + 1));
  ret.guids.guids_val[ret.guids.guids_len] = NULL;
  ret_v = ret.guids.guids_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ldmtool_scan_devices");
    fputs ("[", trace_buffer.fp);
    for (i = 0; ret_v[i]; ++i) {
      if (i > 0) fputs (", ", trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
      fputs (ret_v[i], trace_buffer.fp);
      fputs ("\"", trace_buffer.fp);
    }
    fputs ("]", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_part_get_gpt_type (guestfs_h *g,
                           const char *device,
                           int partnum)
{
  struct guestfs_part_get_gpt_type_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_part_get_gpt_type_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_get_gpt_type", 17);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_get_gpt_type", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_get_gpt_type");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", partnum);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_get_gpt_type") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_gpt_type", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  args.partnum = partnum;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_GET_GPT_TYPE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_get_gpt_type_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_gpt_type", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "part_get_gpt_type", &hdr, &err,
        (xdrproc_t) xdr_guestfs_part_get_gpt_type_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_gpt_type", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_GET_GPT_TYPE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_gpt_type", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_gpt_type", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_get_gpt_type", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_get_gpt_type",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.guid; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_get_gpt_type");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_rename (guestfs_h *g,
                const char *oldpath,
                const char *newpath)
{
  struct guestfs_rename_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "rename", 6);
  if (oldpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rename", "oldpath");
    return -1;
  }
  if (newpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rename", "newpath");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "rename");
    fprintf (trace_buffer.fp, " \"%s\"", oldpath);
    fprintf (trace_buffer.fp, " \"%s\"", newpath);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "rename") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rename", "-1");
    return -1;
  }

  args.oldpath = (char *) oldpath;
  args.newpath = (char *) newpath;
  serial = guestfs_int_send (g, GUESTFS_PROC_RENAME,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_rename_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rename", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "rename", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rename", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RENAME, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rename", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rename", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "rename", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "rename",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "rename");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_internal_mountable *
guestfs_internal_parse_mountable (guestfs_h *g,
                                  const char *mountable)
{
  struct guestfs_internal_parse_mountable_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_internal_parse_mountable_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_internal_mountable *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_parse_mountable", 24);
  if (mountable == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_parse_mountable", "mountable");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_parse_mountable");
    fprintf (trace_buffer.fp, " \"%s\"", mountable);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "internal_parse_mountable") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_parse_mountable", "NULL");
    return NULL;
  }

  args.mountable = (char *) mountable;
  serial = guestfs_int_send (g, GUESTFS_PROC_INTERNAL_PARSE_MOUNTABLE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_internal_parse_mountable_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_parse_mountable", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "internal_parse_mountable", &hdr, &err,
        (xdrproc_t) xdr_guestfs_internal_parse_mountable_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_parse_mountable", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INTERNAL_PARSE_MOUNTABLE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_parse_mountable", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_parse_mountable", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "internal_parse_mountable", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "internal_parse_mountable",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.mountable, sizeof (ret.mountable));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "internal_parse_mountable");
    fprintf (trace_buffer.fp, "<struct guestfs_internal_mountable *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_syslinux_argv (guestfs_h *g,
                       const char *device,
                       const struct guestfs_syslinux_argv *optargs)
{
  struct guestfs_syslinux_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_syslinux_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "syslinux", 8);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "syslinux", "device");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_SYSLINUX_DIRECTORY_BITMASK) &&
      optargs->directory == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "syslinux", "directory");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "syslinux", "syslinux");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "syslinux");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_SYSLINUX_DIRECTORY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "directory", optargs->directory);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "syslinux") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "syslinux", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_SYSLINUX_DIRECTORY_BITMASK) {
    args.directory = (char *) optargs->directory;
  } else {
    args.directory = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_SYSLINUX,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_syslinux_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "syslinux", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "syslinux", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "syslinux", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SYSLINUX, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "syslinux", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "syslinux", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "syslinux", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "syslinux",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "syslinux");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_extlinux (guestfs_h *g,
                  const char *directory)
{
  struct guestfs_extlinux_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "extlinux", 8);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "extlinux", "directory");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "extlinux");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "extlinux") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "extlinux", "-1");
    return -1;
  }

  args.directory = (char *) directory;
  serial = guestfs_int_send (g, GUESTFS_PROC_EXTLINUX,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_extlinux_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "extlinux", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "extlinux", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "extlinux", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_EXTLINUX, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "extlinux", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "extlinux", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "extlinux", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "extlinux",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "extlinux");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_journal_close (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "journal_close", 13);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "journal_close");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "journal_close") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_close", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_JOURNAL_CLOSE, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_close", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "journal_close", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_close", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_JOURNAL_CLOSE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_close", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_close", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "journal_close", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "journal_close",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "journal_close");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_aug_setm (guestfs_h *g,
                  const char *base,
                  const char *sub,
                  const char *val)
{
  struct guestfs_aug_setm_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_aug_setm_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_setm", 8);
  if (base == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_setm", "base");
    return -1;
  }
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_setm", "val");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_setm");
    fprintf (trace_buffer.fp, " \"%s\"", base);
    if (sub)
      fprintf (trace_buffer.fp, " \"%s\"", sub);
    else
      fprintf (trace_buffer.fp, " null");
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_setm") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_setm", "-1");
    return -1;
  }

  args.base = (char *) base;
  args.sub = sub ? (char **) &sub : NULL;
  args.val = (char *) val;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_SETM,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_setm_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_setm", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "aug_setm", &hdr, &err,
        (xdrproc_t) xdr_guestfs_aug_setm_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_setm", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_SETM, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_setm", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_setm", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_setm", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_setm",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.nodes;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_setm");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_part_get_name (guestfs_h *g,
                       const char *device,
                       int partnum)
{
  struct guestfs_part_get_name_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_part_get_name_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_get_name", 13);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_get_name", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_get_name");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", partnum);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_get_name") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_name", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  args.partnum = partnum;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_GET_NAME,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_get_name_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_name", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "part_get_name", &hdr, &err,
        (xdrproc_t) xdr_guestfs_part_get_name_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_name", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_GET_NAME, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_name", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_name", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_get_name", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_get_name",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.name; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_get_name");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_blockdev_setra (guestfs_h *g,
                        const char *device,
                        int sectors)
{
  struct guestfs_blockdev_setra_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blockdev_setra", 14);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blockdev_setra", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blockdev_setra");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", sectors);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blockdev_setra") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setra", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.sectors = sectors;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLOCKDEV_SETRA,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blockdev_setra_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setra", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "blockdev_setra", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setra", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLOCKDEV_SETRA, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setra", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setra", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blockdev_setra", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blockdev_setra",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blockdev_setra");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int64_t
guestfs_btrfs_subvolume_get_default (guestfs_h *g,
                                     const char *fs)
{
  struct guestfs_btrfs_subvolume_get_default_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_btrfs_subvolume_get_default_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_subvolume_get_default", 27);
  if (fs == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_subvolume_get_default", "fs");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_subvolume_get_default");
    fprintf (trace_buffer.fp, " \"%s\"", fs);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_subvolume_get_default") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_get_default", "-1");
    return -1;
  }

  args.fs = (char *) fs;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SUBVOLUME_GET_DEFAULT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_subvolume_get_default_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_get_default", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "btrfs_subvolume_get_default", &hdr, &err,
        (xdrproc_t) xdr_guestfs_btrfs_subvolume_get_default_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_get_default", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SUBVOLUME_GET_DEFAULT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_get_default", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_get_default", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_subvolume_get_default", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_subvolume_get_default",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.id;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_subvolume_get_default");
    fprintf (trace_buffer.fp, "%" PRIi64, ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_btrfsscrub *
guestfs_btrfs_scrub_status (guestfs_h *g,
                            const char *path)
{
  struct guestfs_btrfs_scrub_status_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_btrfs_scrub_status_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_btrfsscrub *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_scrub_status", 18);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_scrub_status", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_scrub_status");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_scrub_status") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_status", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SCRUB_STATUS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_scrub_status_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_status", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "btrfs_scrub_status", &hdr, &err,
        (xdrproc_t) xdr_guestfs_btrfs_scrub_status_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_status", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SCRUB_STATUS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_status", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_status", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_scrub_status", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_scrub_status",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.status, sizeof (ret.status));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_scrub_status");
    fprintf (trace_buffer.fp, "<struct guestfs_btrfsscrub *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

