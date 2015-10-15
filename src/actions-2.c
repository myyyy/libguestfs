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

GUESTFS_DLL_PUBLIC int
guestfs_internal_test_argv (guestfs_h *g,
                            const char *str,
                            const char *optstr,
                            char *const *strlist,
                            int b,
                            int integer,
                            int64_t integer64,
                            const char *filein,
                            const char *fileout,
                            const char *bufferin,
                            size_t bufferin_size,
                            const struct guestfs_internal_test_argv *optargs)
{
  struct guestfs_internal_test_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test", 13);
  if (str == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test", "str");
    return -1;
  }
  if (strlist == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test", "strlist");
    return -1;
  }
  if (filein == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test", "filein");
    return -1;
  }
  if (fileout == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test", "fileout");
    return -1;
  }
  if (bufferin == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test", "bufferin");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_INTERNAL_TEST_OSTRING_BITMASK) &&
      optargs->ostring == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "internal_test", "ostring");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_INTERNAL_TEST_OSTRINGLIST_BITMASK) &&
      optargs->ostringlist == NULL) {
    error (g, "%s: %s: optional list cannot be NULL",
           "internal_test", "ostringlist");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffffe0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "internal_test", "internal_test");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test");
    fprintf (trace_buffer.fp, " \"%s\"", str);
    if (optstr)
      fprintf (trace_buffer.fp, " \"%s\"", optstr);
    else
      fprintf (trace_buffer.fp, " null");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; strlist[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (strlist[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    fputs (b ? " true" : " false", trace_buffer.fp);
    fprintf (trace_buffer.fp, " %d", integer);
    fprintf (trace_buffer.fp, " %" PRIi64, integer64);
    fprintf (trace_buffer.fp, " \"%s\"", filein);
    fprintf (trace_buffer.fp, " \"%s\"", fileout);
    fputc (' ', trace_buffer.fp);
    guestfs_int_print_BufferIn (trace_buffer.fp, bufferin, bufferin_size);
    if (optargs->bitmask & GUESTFS_INTERNAL_TEST_OBOOL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "obool", optargs->obool ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_INTERNAL_TEST_OINT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "oint", optargs->oint);
    }
    if (optargs->bitmask & GUESTFS_INTERNAL_TEST_OINT64_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "oint64", optargs->oint64);
    }
    if (optargs->bitmask & GUESTFS_INTERNAL_TEST_OSTRING_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "ostring", optargs->ostring);
    }
    if (optargs->bitmask & GUESTFS_INTERNAL_TEST_OSTRINGLIST_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:", "ostringlist");
      for (i = 0; optargs->ostringlist[i] != NULL; ++i) {
        if (i > 0) fputc (' ', trace_buffer.fp);
        fputs (optargs->ostringlist[i], trace_buffer.fp);
      }
      fputc ('\"', trace_buffer.fp);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test (g, str, optstr, strlist, b, integer, integer64, filein, fileout, bufferin, bufferin_size, optargs);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_internal_test_rstringlisterr (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rstringlisterr", 28);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rstringlisterr");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rstringlisterr (g);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rstringlisterr");
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
                         "internal_test_rstringlisterr", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_add_drive_ro (guestfs_h *g,
                      const char *filename)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "add_drive_ro");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "add_drive_ro", 12);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "add_drive_ro", "filename");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "add_drive_ro");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_add_drive_ro (g, filename);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "add_drive_ro");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "add_drive_ro", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_qemu (guestfs_h *g,
                  const char *hv)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_qemu");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_qemu", 8);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_qemu");
    if (hv)
      fprintf (trace_buffer.fp, " \"%s\"", hv);
    else
      fprintf (trace_buffer.fp, " null");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_qemu (g, hv);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_qemu");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_qemu", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_path (guestfs_h *g,
                  const char *searchpath)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_path");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_path", 8);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_path");
    if (searchpath)
      fprintf (trace_buffer.fp, " \"%s\"", searchpath);
    else
      fprintf (trace_buffer.fp, " null");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_path (g, searchpath);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_path");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_path", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_ready (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_ready", 8);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_ready");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_is_ready (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "is_ready");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_ready", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_memsize (guestfs_h *g,
                     int memsize)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_memsize");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_memsize", 11);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_memsize");
    fprintf (trace_buffer.fp, " %d", memsize);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_memsize (g, memsize);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_memsize");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_memsize", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_get_pid (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_pid", 7);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_pid");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_pid (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_pid");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_pid", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_selinux (guestfs_h *g,
                     int selinux)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_selinux");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_selinux", 11);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_selinux");
    fputs (selinux ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_selinux (g, selinux);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_selinux");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_selinux", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_get_trace (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_trace", 9);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_trace");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_trace (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_trace");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_trace", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_add_drive_with_if (guestfs_h *g,
                           const char *filename,
                           const char *iface)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "add_drive_with_if");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "add_drive_with_if", 17);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "add_drive_with_if", "filename");
    return -1;
  }
  if (iface == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "add_drive_with_if", "iface");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "add_drive_with_if");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    fprintf (trace_buffer.fp, " \"%s\"", iface);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_add_drive_with_if (g, filename, iface);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "add_drive_with_if");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "add_drive_with_if", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_file_architecture (guestfs_h *g,
                           const char *filename)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "file_architecture", 17);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "file_architecture", "filename");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "file_architecture");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_file_architecture (g, filename);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "file_architecture");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "file_architecture", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_inspect_get_major_version (guestfs_h *g,
                                   const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_major_version", 25);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_major_version", "root");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_major_version");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_major_version (g, root);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_major_version");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_major_version", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_inspect_get_product_name (guestfs_h *g,
                                  const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_product_name", 24);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_product_name", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_product_name");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_product_name (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_product_name");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_product_name", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_inspect_get_package_format (guestfs_h *g,
                                    const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_package_format", 26);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_package_format", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_package_format");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_package_format (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_package_format");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_package_format", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC struct guestfs_application2_list *
guestfs_inspect_list_applications2 (guestfs_h *g,
                                    const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_application2_list *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_list_applications2", 26);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_list_applications2", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_list_applications2");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_list_applications2 (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_list_applications2");
      fprintf (trace_buffer.fp, "<struct guestfs_application2_list *>");
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_list_applications2", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_inspect_get_format (guestfs_h *g,
                            const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_format", 18);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_format", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_format");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_format (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_format");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_format", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_inspect_is_multipart (guestfs_h *g,
                              const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_is_multipart", 20);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_is_multipart", "root");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_is_multipart");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_is_multipart (g, root);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_is_multipart");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_is_multipart", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_find (guestfs_h *g,
              const char *directory)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "find", 4);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "find", "directory");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "find");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_find (g, directory);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "find");
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
                         "find", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_get_libvirt_requested_credentials (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_libvirt_requested_credentials", 33);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_libvirt_requested_credentials");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_libvirt_requested_credentials (g);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_libvirt_requested_credentials");
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
                         "get_libvirt_requested_credentials", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int64_t
guestfs_c_pointer (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "c_pointer", 9);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "c_pointer");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_c_pointer (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "c_pointer");
      fprintf (trace_buffer.fp, "%" PRIi64, r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "c_pointer", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_mount (guestfs_h *g,
               const char *mountable,
               const char *mountpoint)
{
  struct guestfs_mount_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mount", 5);
  if (mountable == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount", "mountable");
    return -1;
  }
  if (mountpoint == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount", "mountpoint");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mount");
    fprintf (trace_buffer.fp, " \"%s\"", mountable);
    fprintf (trace_buffer.fp, " \"%s\"", mountpoint);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mount") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount", "-1");
    return -1;
  }

  args.mountable = (char *) mountable;
  args.mountpoint = (char *) mountpoint;
  serial = guestfs_int_send (g, GUESTFS_PROC_MOUNT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mount_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mount", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MOUNT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mount", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mount",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mount");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_aug_insert (guestfs_h *g,
                    const char *augpath,
                    const char *label,
                    int before)
{
  struct guestfs_aug_insert_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_insert", 10);
  if (augpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_insert", "augpath");
    return -1;
  }
  if (label == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_insert", "label");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_insert");
    fprintf (trace_buffer.fp, " \"%s\"", augpath);
    fprintf (trace_buffer.fp, " \"%s\"", label);
    fputs (before ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_insert") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_insert", "-1");
    return -1;
  }

  args.augpath = (char *) augpath;
  args.label = (char *) label;
  args.before = before;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_INSERT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_insert_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_insert", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "aug_insert", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_insert", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_INSERT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_insert", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_insert", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_insert", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_insert",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_insert");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_aug_mv (guestfs_h *g,
                const char *src,
                const char *dest)
{
  struct guestfs_aug_mv_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_mv", 6);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_mv", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_mv", "dest");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_mv");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_mv") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_mv", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_MV,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_mv_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_mv", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "aug_mv", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_mv", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_MV, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_mv", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_mv", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_mv", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_mv",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_mv");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_rm_rf (guestfs_h *g,
               const char *path)
{
  struct guestfs_rm_rf_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "rm_rf", 5);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rm_rf", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "rm_rf");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "rm_rf") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm_rf", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_RM_RF,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_rm_rf_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm_rf", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "rm_rf", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm_rf", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RM_RF, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm_rf", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm_rf", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "rm_rf", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "rm_rf",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "rm_rf");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkdir (guestfs_h *g,
               const char *path)
{
  struct guestfs_mkdir_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkdir", 5);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkdir", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkdir");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkdir") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKDIR,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mkdir_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkdir", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKDIR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkdir", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkdir",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkdir");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkdir_p (guestfs_h *g,
                 const char *path)
{
  struct guestfs_mkdir_p_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkdir_p", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkdir_p", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkdir_p");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkdir_p") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_p", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKDIR_P,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mkdir_p_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_p", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkdir_p", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_p", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKDIR_P, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_p", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_p", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkdir_p", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkdir_p",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkdir_p");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_chmod (guestfs_h *g,
               int mode,
               const char *path)
{
  struct guestfs_chmod_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "chmod", 5);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "chmod", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "chmod");
    fprintf (trace_buffer.fp, " %d", mode);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "chmod") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "chmod", "-1");
    return -1;
  }

  args.mode = mode;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_CHMOD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_chmod_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "chmod", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "chmod", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "chmod", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CHMOD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "chmod", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "chmod", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "chmod", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "chmod",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "chmod");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lvm_remove_all (guestfs_h *g)
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
                                    "lvm_remove_all", 14);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvm_remove_all");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvm_remove_all") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_remove_all", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LVM_REMOVE_ALL, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_remove_all", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lvm_remove_all", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_remove_all", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVM_REMOVE_ALL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_remove_all", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_remove_all", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvm_remove_all", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvm_remove_all",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvm_remove_all");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_statvfs *
guestfs_statvfs (guestfs_h *g,
                 const char *path)
{
  struct guestfs_statvfs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_statvfs_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_statvfs *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "statvfs", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "statvfs", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "statvfs");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "statvfs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statvfs", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_STATVFS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_statvfs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statvfs", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "statvfs", &hdr, &err,
        (xdrproc_t) xdr_guestfs_statvfs_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statvfs", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_STATVFS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statvfs", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statvfs", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "statvfs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "statvfs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.statbuf, sizeof (ret.statbuf));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "statvfs");
    fprintf (trace_buffer.fp, "<struct guestfs_statvfs *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_blockdev_getro (guestfs_h *g,
                        const char *device)
{
  struct guestfs_blockdev_getro_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_blockdev_getro_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blockdev_getro", 14);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blockdev_getro", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blockdev_getro");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blockdev_getro") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getro", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLOCKDEV_GETRO,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blockdev_getro_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getro", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "blockdev_getro", &hdr, &err,
        (xdrproc_t) xdr_guestfs_blockdev_getro_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getro", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLOCKDEV_GETRO, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getro", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getro", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blockdev_getro", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blockdev_getro",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.ro;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blockdev_getro");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_checksum (guestfs_h *g,
                  const char *csumtype,
                  const char *path)
{
  struct guestfs_checksum_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_checksum_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "checksum", 8);
  if (csumtype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "checksum", "csumtype");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "checksum", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "checksum");
    fprintf (trace_buffer.fp, " \"%s\"", csumtype);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "checksum") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum", "NULL");
    return NULL;
  }

  args.csumtype = (char *) csumtype;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_CHECKSUM,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_checksum_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "checksum", &hdr, &err,
        (xdrproc_t) xdr_guestfs_checksum_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CHECKSUM, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "checksum", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "checksum",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.checksum; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "checksum");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_equal (guestfs_h *g,
               const char *file1,
               const char *file2)
{
  struct guestfs_equal_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_equal_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "equal", 5);
  if (file1 == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "equal", "file1");
    return -1;
  }
  if (file2 == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "equal", "file2");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "equal");
    fprintf (trace_buffer.fp, " \"%s\"", file1);
    fprintf (trace_buffer.fp, " \"%s\"", file2);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "equal") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "equal", "-1");
    return -1;
  }

  args.file1 = (char *) file1;
  args.file2 = (char *) file2;
  serial = guestfs_int_send (g, GUESTFS_PROC_EQUAL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_equal_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "equal", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "equal", &hdr, &err,
        (xdrproc_t) xdr_guestfs_equal_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "equal", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_EQUAL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "equal", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "equal", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "equal", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "equal",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.equality;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "equal");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_strings_e (guestfs_h *g,
                   const char *encoding,
                   const char *path)
{
  struct guestfs_strings_e_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_strings_e_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "strings_e", 9);
  if (encoding == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "strings_e", "encoding");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "strings_e", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "strings_e");
    fprintf (trace_buffer.fp, " \"%s\"", encoding);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "strings_e") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings_e", "NULL");
    return NULL;
  }

  args.encoding = (char *) encoding;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_STRINGS_E,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_strings_e_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings_e", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "strings_e", &hdr, &err,
        (xdrproc_t) xdr_guestfs_strings_e_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings_e", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_STRINGS_E, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings_e", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings_e", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "strings_e", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "strings_e",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.stringsout.stringsout_val =
    safe_realloc (g, ret.stringsout.stringsout_val,
                  sizeof (char *) * (ret.stringsout.stringsout_len + 1));
  ret.stringsout.stringsout_val[ret.stringsout.stringsout_len] = NULL;
  ret_v = ret.stringsout.stringsout_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "strings_e");
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
guestfs_hexdump (guestfs_h *g,
                 const char *path)
{
  struct guestfs_hexdump_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_hexdump_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "hexdump", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "hexdump", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "hexdump");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "hexdump") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hexdump", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_HEXDUMP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_hexdump_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hexdump", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "hexdump", &hdr, &err,
        (xdrproc_t) xdr_guestfs_hexdump_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hexdump", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_HEXDUMP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hexdump", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hexdump", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "hexdump", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "hexdump",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.dump; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "hexdump");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_sfdisk_l (guestfs_h *g,
                  const char *device)
{
  struct guestfs_sfdisk_l_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_sfdisk_l_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "sfdisk_l", 8);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "sfdisk_l", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "sfdisk_l");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "sfdisk_l") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_l", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_SFDISK_L,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_sfdisk_l_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_l", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "sfdisk_l", &hdr, &err,
        (xdrproc_t) xdr_guestfs_sfdisk_l_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_l", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SFDISK_L, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_l", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_l", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "sfdisk_l", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "sfdisk_l",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.partitions; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "sfdisk_l");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lvresize (guestfs_h *g,
                  const char *device,
                  int mbytes)
{
  struct guestfs_lvresize_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lvresize", 8);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvresize", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvresize");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", mbytes);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvresize") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.mbytes = mbytes;
  serial = guestfs_int_send (g, GUESTFS_PROC_LVRESIZE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lvresize_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lvresize", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVRESIZE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvresize", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvresize", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvresize",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvresize");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_sleep (guestfs_h *g,
               int secs)
{
  struct guestfs_sleep_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "sleep", 5);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "sleep");
    fprintf (trace_buffer.fp, " %d", secs);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "sleep") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sleep", "-1");
    return -1;
  }

  args.secs = secs;
  serial = guestfs_int_send (g, GUESTFS_PROC_SLEEP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_sleep_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sleep", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "sleep", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sleep", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SLEEP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sleep", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sleep", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "sleep", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "sleep",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "sleep");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_scrub_device (guestfs_h *g,
                      const char *device)
{
  struct guestfs_scrub_device_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "scrub_device", 12);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "scrub_device", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "scrub_device");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "scrub_device") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_device", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_SCRUB_DEVICE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_scrub_device_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_device", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "scrub_device", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_device", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SCRUB_DEVICE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_device", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_device", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "scrub_device", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "scrub_device",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "scrub_device");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_scrub_file (guestfs_h *g,
                    const char *file)
{
  struct guestfs_scrub_file_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "scrub_file", 10);
  if (file == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "scrub_file", "file");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "scrub_file");
    fprintf (trace_buffer.fp, " \"%s\"", file);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "scrub_file") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_file", "-1");
    return -1;
  }

  args.file = (char *) file;
  serial = guestfs_int_send (g, GUESTFS_PROC_SCRUB_FILE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_scrub_file_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_file", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "scrub_file", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_file", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SCRUB_FILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_file", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "scrub_file", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "scrub_file", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "scrub_file",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "scrub_file");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_mkdtemp (guestfs_h *g,
                 const char *tmpl)
{
  struct guestfs_mkdtemp_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_mkdtemp_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkdtemp", 7);
  if (tmpl == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkdtemp", "tmpl");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkdtemp");
    fprintf (trace_buffer.fp, " \"%s\"", tmpl);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkdtemp") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdtemp", "NULL");
    return NULL;
  }

  args.tmpl = (char *) tmpl;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKDTEMP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mkdtemp_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdtemp", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "mkdtemp", &hdr, &err,
        (xdrproc_t) xdr_guestfs_mkdtemp_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdtemp", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKDTEMP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdtemp", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdtemp", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkdtemp", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkdtemp",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.dir; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkdtemp");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_head_n (guestfs_h *g,
                int nrlines,
                const char *path)
{
  struct guestfs_head_n_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_head_n_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "head_n", 6);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "head_n", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "head_n");
    fprintf (trace_buffer.fp, " %d", nrlines);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "head_n") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "head_n", "NULL");
    return NULL;
  }

  args.nrlines = nrlines;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_HEAD_N,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_head_n_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "head_n", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "head_n", &hdr, &err,
        (xdrproc_t) xdr_guestfs_head_n_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "head_n", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_HEAD_N, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "head_n", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "head_n", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "head_n", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "head_n",
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
    fprintf (trace_buffer.fp, "%s = ", "head_n");
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
guestfs_tail (guestfs_h *g,
              const char *path)
{
  struct guestfs_tail_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_tail_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "tail", 4);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tail", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "tail");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "tail") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_TAIL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_tail_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "tail", &hdr, &err,
        (xdrproc_t) xdr_guestfs_tail_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TAIL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tail", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "tail", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "tail",
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
    fprintf (trace_buffer.fp, "%s = ", "tail");
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
guestfs_mount_loop (guestfs_h *g,
                    const char *file,
                    const char *mountpoint)
{
  struct guestfs_mount_loop_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mount_loop", 10);
  if (file == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_loop", "file");
    return -1;
  }
  if (mountpoint == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_loop", "mountpoint");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mount_loop");
    fprintf (trace_buffer.fp, " \"%s\"", file);
    fprintf (trace_buffer.fp, " \"%s\"", mountpoint);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mount_loop") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_loop", "-1");
    return -1;
  }

  args.file = (char *) file;
  args.mountpoint = (char *) mountpoint;
  serial = guestfs_int_send (g, GUESTFS_PROC_MOUNT_LOOP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mount_loop_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_loop", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mount_loop", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_loop", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MOUNT_LOOP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_loop", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_loop", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mount_loop", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mount_loop",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mount_loop");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mknod (guestfs_h *g,
               int mode,
               int devmajor,
               int devminor,
               const char *path)
{
  struct guestfs_mknod_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mknod", 5);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mknod", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mknod");
    fprintf (trace_buffer.fp, " %d", mode);
    fprintf (trace_buffer.fp, " %d", devmajor);
    fprintf (trace_buffer.fp, " %d", devminor);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mknod") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod", "-1");
    return -1;
  }

  args.mode = mode;
  args.devmajor = devmajor;
  args.devminor = devminor;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKNOD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mknod_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mknod", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKNOD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mknod", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mknod",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mknod");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mknod_b (guestfs_h *g,
                 int mode,
                 int devmajor,
                 int devminor,
                 const char *path)
{
  struct guestfs_mknod_b_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mknod_b", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mknod_b", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mknod_b");
    fprintf (trace_buffer.fp, " %d", mode);
    fprintf (trace_buffer.fp, " %d", devmajor);
    fprintf (trace_buffer.fp, " %d", devminor);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mknod_b") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod_b", "-1");
    return -1;
  }

  args.mode = mode;
  args.devmajor = devmajor;
  args.devminor = devminor;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKNOD_B,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mknod_b_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod_b", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mknod_b", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod_b", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKNOD_B, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod_b", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mknod_b", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mknod_b", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mknod_b",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mknod_b");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_zfgrepi (guestfs_h *g,
                 const char *pattern,
                 const char *path)
{
  struct guestfs_zfgrepi_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_zfgrepi_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "zfgrepi", 7);
  if (pattern == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zfgrepi", "pattern");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zfgrepi", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "zfgrepi");
    fprintf (trace_buffer.fp, " \"%s\"", pattern);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "zfgrepi") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrepi", "NULL");
    return NULL;
  }

  args.pattern = (char *) pattern;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_ZFGREPI,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_zfgrepi_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrepi", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "zfgrepi", &hdr, &err,
        (xdrproc_t) xdr_guestfs_zfgrepi_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrepi", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ZFGREPI, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrepi", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrepi", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "zfgrepi", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "zfgrepi",
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
    fprintf (trace_buffer.fp, "%s = ", "zfgrepi");
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
guestfs_realpath (guestfs_h *g,
                  const char *path)
{
  struct guestfs_realpath_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_realpath_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "realpath", 8);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "realpath", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "realpath");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "realpath") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "realpath", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_REALPATH,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_realpath_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "realpath", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "realpath", &hdr, &err,
        (xdrproc_t) xdr_guestfs_realpath_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "realpath", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_REALPATH, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "realpath", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "realpath", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "realpath", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "realpath",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.rpath; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "realpath");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_readlink (guestfs_h *g,
                  const char *path)
{
  struct guestfs_readlink_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_readlink_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "readlink", 8);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "readlink", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "readlink");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "readlink") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readlink", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_READLINK,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_readlink_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readlink", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "readlink", &hdr, &err,
        (xdrproc_t) xdr_guestfs_readlink_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readlink", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_READLINK, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readlink", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "readlink", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "readlink", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "readlink",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.link; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "readlink");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_inotify_close (guestfs_h *g)
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
                                    "inotify_close", 13);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inotify_close");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "inotify_close") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_close", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_INOTIFY_CLOSE, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_close", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "inotify_close", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_close", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INOTIFY_CLOSE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_close", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_close", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "inotify_close", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "inotify_close",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "inotify_close");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkfs_b (guestfs_h *g,
                const char *fstype,
                int blocksize,
                const char *device)
{
  struct guestfs_mkfs_b_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkfs_b", 6);
  if (fstype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkfs_b", "fstype");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkfs_b", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkfs_b");
    fprintf (trace_buffer.fp, " \"%s\"", fstype);
    fprintf (trace_buffer.fp, " %d", blocksize);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkfs_b") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_b", "-1");
    return -1;
  }

  args.fstype = (char *) fstype;
  args.blocksize = blocksize;
  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKFS_B,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mkfs_b_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_b", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkfs_b", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_b", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKFS_B, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_b", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_b", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkfs_b", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkfs_b",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkfs_b");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mke2journal (guestfs_h *g,
                     int blocksize,
                     const char *device)
{
  struct guestfs_mke2journal_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mke2journal", 11);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2journal", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mke2journal");
    fprintf (trace_buffer.fp, " %d", blocksize);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mke2journal") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal", "-1");
    return -1;
  }

  args.blocksize = blocksize;
  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKE2JOURNAL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mke2journal_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mke2journal", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKE2JOURNAL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2journal", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mke2journal", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mke2journal",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mke2journal");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_echo_daemon (guestfs_h *g,
                     char *const *words)
{
  struct guestfs_echo_daemon_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_echo_daemon_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "echo_daemon", 11);
  if (words == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "echo_daemon", "words");
    return NULL;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "echo_daemon");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; words[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (words[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "echo_daemon") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "echo_daemon", "NULL");
    return NULL;
  }

  args.words.words_val = (char **) words;
  for (args.words.words_len = 0; words[args.words.words_len]; args.words.words_len++) ;
  serial = guestfs_int_send (g, GUESTFS_PROC_ECHO_DAEMON,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_echo_daemon_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "echo_daemon", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "echo_daemon", &hdr, &err,
        (xdrproc_t) xdr_guestfs_echo_daemon_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "echo_daemon", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ECHO_DAEMON, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "echo_daemon", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "echo_daemon", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "echo_daemon", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "echo_daemon",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.output; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "echo_daemon");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_find0 (guestfs_h *g,
               const char *directory,
               const char *files)
{
  struct guestfs_find0_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "find0", 5);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "find0", "directory");
    return -1;
  }
  if (files == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "find0", "files");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "find0");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    fprintf (trace_buffer.fp, " \"%s\"", files);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "find0") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "find0", "-1");
    return -1;
  }

  args.directory = (char *) directory;
  serial = guestfs_int_send (g, GUESTFS_PROC_FIND0,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_find0_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "find0", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "find0", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "find0", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FIND0, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "find0", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "find0", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "find0", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "find0",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, files) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "find0", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "find0");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_part_disk (guestfs_h *g,
                   const char *device,
                   const char *parttype)
{
  struct guestfs_part_disk_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_disk", 9);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_disk", "device");
    return -1;
  }
  if (parttype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_disk", "parttype");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_disk");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"%s\"", parttype);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_disk") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_disk", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.parttype = (char *) parttype;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_DISK,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_disk_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_disk", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "part_disk", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_disk", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_DISK, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_disk", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_disk", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_disk", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_disk",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_disk");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_available (guestfs_h *g,
                   char *const *groups)
{
  struct guestfs_available_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "available", 9);
  if (groups == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "available", "groups");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "available");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; groups[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (groups[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "available") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available", "-1");
    return -1;
  }

  args.groups.groups_val = (char **) groups;
  for (args.groups.groups_len = 0; groups[args.groups.groups_len]; args.groups.groups_len++) ;
  serial = guestfs_int_send (g, GUESTFS_PROC_AVAILABLE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_available_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "available", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AVAILABLE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "available", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "available",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "available");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_base64_in (guestfs_h *g,
                   const char *base64file,
                   const char *filename)
{
  struct guestfs_base64_in_args args;
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
                                    "base64_in", 9);
  if (base64file == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "base64_in", "base64file");
    return -1;
  }
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "base64_in", "filename");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "base64_in");
    fprintf (trace_buffer.fp, " \"%s\"", base64file);
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (stat (base64file, &progress_stat) == 0 &&
      S_ISREG (progress_stat.st_mode))
    progress_hint += progress_stat.st_size;

  if (guestfs_int_check_appliance_up (g, "base64_in") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "base64_in", "-1");
    return -1;
  }

  args.filename = (char *) filename;
  serial = guestfs_int_send (g, GUESTFS_PROC_BASE64_IN,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_base64_in_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "base64_in", "-1");
    return -1;
  }

  r = guestfs_int_send_file (g, base64file);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "base64_in", "-1");
    /* daemon will send an error reply which we discard */
    guestfs_int_recv_discard (g, "base64_in");
    return -1;
  }
  if (r == -2) /* daemon cancelled */
    goto read_reply;

 read_reply:
  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "base64_in", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "base64_in", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BASE64_IN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "base64_in", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "base64_in", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "base64_in", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "base64_in",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "base64_in");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_available_all_groups (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_available_all_groups_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "available_all_groups", 20);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "available_all_groups");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "available_all_groups") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available_all_groups", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_AVAILABLE_ALL_GROUPS, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available_all_groups", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "available_all_groups", &hdr, &err,
        (xdrproc_t) xdr_guestfs_available_all_groups_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available_all_groups", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AVAILABLE_ALL_GROUPS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available_all_groups", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "available_all_groups", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "available_all_groups", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "available_all_groups",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.groups.groups_val =
    safe_realloc (g, ret.groups.groups_val,
                  sizeof (char *) * (ret.groups.groups_len + 1));
  ret.groups.groups_val[ret.groups.groups_len] = NULL;
  ret_v = ret.groups.groups_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "available_all_groups");
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
guestfs_is_chardev_opts_argv (guestfs_h *g,
                              const char *path,
                              const struct guestfs_is_chardev_opts_argv *optargs)
{
  struct guestfs_is_chardev_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_is_chardev_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_chardev_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_chardev", 10);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_chardev_opts", "path");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "is_chardev_opts", "is_chardev_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_chardev");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    if (optargs->bitmask & GUESTFS_IS_CHARDEV_OPTS_FOLLOWSYMLINKS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "followsymlinks", optargs->followsymlinks ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_chardev") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_chardev", "-1");
    return -1;
  }

  args.path = (char *) path;
  if (optargs->bitmask & GUESTFS_IS_CHARDEV_OPTS_FOLLOWSYMLINKS_BITMASK) {
    args.followsymlinks = optargs->followsymlinks;
  } else {
    args.followsymlinks = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_CHARDEV,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_is_chardev_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_chardev", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_chardev", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_chardev_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_chardev", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_CHARDEV, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_chardev", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_chardev", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_chardev", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_chardev",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.flag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_chardev");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_part_to_dev (guestfs_h *g,
                     const char *partition)
{
  struct guestfs_part_to_dev_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_part_to_dev_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_to_dev", 11);
  if (partition == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_to_dev", "partition");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_to_dev");
    fprintf (trace_buffer.fp, " \"%s\"", partition);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_to_dev") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_dev", "NULL");
    return NULL;
  }

  args.partition = (char *) partition;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_TO_DEV,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_to_dev_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_dev", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "part_to_dev", &hdr, &err,
        (xdrproc_t) xdr_guestfs_part_to_dev_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_dev", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_TO_DEV, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_dev", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_to_dev", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_to_dev", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_to_dev",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.device; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_to_dev");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ntfsresize_opts_argv (guestfs_h *g,
                              const char *device,
                              const struct guestfs_ntfsresize_opts_argv *optargs)
{
  struct guestfs_ntfsresize_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_ntfsresize_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ntfsresize", 10);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ntfsresize_opts", "device");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "ntfsresize_opts", "ntfsresize_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ntfsresize");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_NTFSRESIZE_OPTS_SIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "size", optargs->size);
    }
    if (optargs->bitmask & GUESTFS_NTFSRESIZE_OPTS_FORCE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "force", optargs->force ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ntfsresize") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_NTFSRESIZE_OPTS_SIZE_BITMASK) {
    args.size = optargs->size;
  } else {
    args.size = 0;
  }
  if (optargs->bitmask & GUESTFS_NTFSRESIZE_OPTS_FORCE_BITMASK) {
    args.force = optargs->force;
  } else {
    args.force = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_NTFSRESIZE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_ntfsresize_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ntfsresize", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_NTFSRESIZE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsresize", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ntfsresize", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ntfsresize",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ntfsresize");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_copy_device_to_device_argv (guestfs_h *g,
                                    const char *src,
                                    const char *dest,
                                    const struct guestfs_copy_device_to_device_argv *optargs)
{
  struct guestfs_copy_device_to_device_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_copy_device_to_device_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "copy_device_to_device", 21);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_device_to_device", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_device_to_device", "dest");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffffe0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "copy_device_to_device", "copy_device_to_device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "copy_device_to_device");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_SRCOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "srcoffset", optargs->srcoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_DESTOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "destoffset", optargs->destoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_SIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "size", optargs->size);
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_SPARSE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "sparse", optargs->sparse ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_APPEND_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "append", optargs->append ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "copy_device_to_device") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_device", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_SRCOFFSET_BITMASK) {
    args.srcoffset = optargs->srcoffset;
  } else {
    args.srcoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_DESTOFFSET_BITMASK) {
    args.destoffset = optargs->destoffset;
  } else {
    args.destoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_SIZE_BITMASK) {
    args.size = optargs->size;
  } else {
    args.size = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_SPARSE_BITMASK) {
    args.sparse = optargs->sparse;
  } else {
    args.sparse = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_DEVICE_APPEND_BITMASK) {
    args.append = optargs->append;
  } else {
    args.append = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_COPY_DEVICE_TO_DEVICE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_copy_device_to_device_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_device", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "copy_device_to_device", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_device", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COPY_DEVICE_TO_DEVICE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_device", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_device", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "copy_device_to_device", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "copy_device_to_device",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "copy_device_to_device");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_list_md_devices (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_list_md_devices_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "list_md_devices", 15);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "list_md_devices");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "list_md_devices") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_md_devices", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LIST_MD_DEVICES, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_md_devices", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "list_md_devices", &hdr, &err,
        (xdrproc_t) xdr_guestfs_list_md_devices_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_md_devices", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LIST_MD_DEVICES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_md_devices", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_md_devices", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "list_md_devices", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "list_md_devices",
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
    fprintf (trace_buffer.fp, "%s = ", "list_md_devices");
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
guestfs_llz (guestfs_h *g,
             const char *directory)
{
  struct guestfs_llz_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_llz_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "llz", 3);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "llz", "directory");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "llz");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "llz") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "llz", "NULL");
    return NULL;
  }

  args.directory = (char *) directory;
  serial = guestfs_int_send (g, GUESTFS_PROC_LLZ,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_llz_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "llz", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "llz", &hdr, &err,
        (xdrproc_t) xdr_guestfs_llz_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "llz", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LLZ, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "llz", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "llz", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "llz", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "llz",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.listing; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "llz");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lvcreate_free (guestfs_h *g,
                       const char *logvol,
                       const char *volgroup,
                       int percent)
{
  struct guestfs_lvcreate_free_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lvcreate_free", 13);
  if (logvol == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvcreate_free", "logvol");
    return -1;
  }
  if (volgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvcreate_free", "volgroup");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvcreate_free");
    fprintf (trace_buffer.fp, " \"%s\"", logvol);
    fprintf (trace_buffer.fp, " \"%s\"", volgroup);
    fprintf (trace_buffer.fp, " %d", percent);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvcreate_free") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate_free", "-1");
    return -1;
  }

  args.logvol = (char *) logvol;
  args.volgroup = (char *) volgroup;
  args.percent = percent;
  serial = guestfs_int_send (g, GUESTFS_PROC_LVCREATE_FREE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lvcreate_free_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate_free", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lvcreate_free", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate_free", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVCREATE_FREE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate_free", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvcreate_free", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvcreate_free", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvcreate_free",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvcreate_free");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkfs_btrfs_argv (guestfs_h *g,
                         char *const *devices,
                         const struct guestfs_mkfs_btrfs_argv *optargs)
{
  struct guestfs_mkfs_btrfs_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_mkfs_btrfs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkfs_btrfs", 10);
  if (devices == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkfs_btrfs", "devices");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKFS_BTRFS_DATATYPE_BITMASK) &&
      optargs->datatype == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mkfs_btrfs", "datatype");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKFS_BTRFS_LABEL_BITMASK) &&
      optargs->label == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mkfs_btrfs", "label");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKFS_BTRFS_METADATA_BITMASK) &&
      optargs->metadata == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mkfs_btrfs", "metadata");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffff00)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "mkfs_btrfs", "mkfs_btrfs");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkfs_btrfs");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; devices[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (devices[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_ALLOCSTART_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "allocstart", optargs->allocstart);
    }
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_BYTECOUNT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "bytecount", optargs->bytecount);
    }
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_DATATYPE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "datatype", optargs->datatype);
    }
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_LEAFSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "leafsize", optargs->leafsize);
    }
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_LABEL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "label", optargs->label);
    }
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_METADATA_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "metadata", optargs->metadata);
    }
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_NODESIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "nodesize", optargs->nodesize);
    }
    if (optargs->bitmask & GUESTFS_MKFS_BTRFS_SECTORSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "sectorsize", optargs->sectorsize);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkfs_btrfs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_btrfs", "-1");
    return -1;
  }

  args.devices.devices_val = (char **) devices;
  for (args.devices.devices_len = 0; devices[args.devices.devices_len]; args.devices.devices_len++) ;
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_ALLOCSTART_BITMASK) {
    args.allocstart = optargs->allocstart;
  } else {
    args.allocstart = 0;
  }
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_BYTECOUNT_BITMASK) {
    args.bytecount = optargs->bytecount;
  } else {
    args.bytecount = 0;
  }
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_DATATYPE_BITMASK) {
    args.datatype = (char *) optargs->datatype;
  } else {
    args.datatype = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_LEAFSIZE_BITMASK) {
    args.leafsize = optargs->leafsize;
  } else {
    args.leafsize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_LABEL_BITMASK) {
    args.label = (char *) optargs->label;
  } else {
    args.label = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_METADATA_BITMASK) {
    args.metadata = (char *) optargs->metadata;
  } else {
    args.metadata = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_NODESIZE_BITMASK) {
    args.nodesize = optargs->nodesize;
  } else {
    args.nodesize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKFS_BTRFS_SECTORSIZE_BITMASK) {
    args.sectorsize = optargs->sectorsize;
  } else {
    args.sectorsize = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_MKFS_BTRFS,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_mkfs_btrfs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_btrfs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkfs_btrfs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_btrfs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKFS_BTRFS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_btrfs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs_btrfs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkfs_btrfs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkfs_btrfs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkfs_btrfs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_e2generation (guestfs_h *g,
                          const char *file,
                          int64_t generation)
{
  struct guestfs_set_e2generation_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_e2generation", 16);
  if (file == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_e2generation", "file");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_e2generation");
    fprintf (trace_buffer.fp, " \"%s\"", file);
    fprintf (trace_buffer.fp, " %" PRIi64, generation);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "set_e2generation") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2generation", "-1");
    return -1;
  }

  args.file = (char *) file;
  args.generation = generation;
  serial = guestfs_int_send (g, GUESTFS_PROC_SET_E2GENERATION,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_set_e2generation_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2generation", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "set_e2generation", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2generation", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SET_E2GENERATION, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2generation", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2generation", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "set_e2generation", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "set_e2generation",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "set_e2generation");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_subvolume_delete (guestfs_h *g,
                                const char *subvolume)
{
  struct guestfs_btrfs_subvolume_delete_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_subvolume_delete", 22);
  if (subvolume == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_subvolume_delete", "subvolume");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_subvolume_delete");
    fprintf (trace_buffer.fp, " \"%s\"", subvolume);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_subvolume_delete") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_delete", "-1");
    return -1;
  }

  args.subvolume = (char *) subvolume;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SUBVOLUME_DELETE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_subvolume_delete_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_delete", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_subvolume_delete", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_delete", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SUBVOLUME_DELETE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_delete", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_delete", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_subvolume_delete", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_subvolume_delete",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_subvolume_delete");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_subvolume_create_opts_argv (guestfs_h *g,
                                          const char *dest,
                                          const struct guestfs_btrfs_subvolume_create_opts_argv *optargs)
{
  struct guestfs_btrfs_subvolume_create_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_btrfs_subvolume_create_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_subvolume_create", 22);
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_subvolume_create_opts", "dest");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_CREATE_OPTS_QGROUPID_BITMASK) &&
      optargs->qgroupid == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "btrfs_subvolume_create_opts", "qgroupid");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "btrfs_subvolume_create_opts", "btrfs_subvolume_create_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_subvolume_create");
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_CREATE_OPTS_QGROUPID_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "qgroupid", optargs->qgroupid);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_subvolume_create") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_create", "-1");
    return -1;
  }

  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_CREATE_OPTS_QGROUPID_BITMASK) {
    args.qgroupid = (char *) optargs->qgroupid;
  } else {
    args.qgroupid = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SUBVOLUME_CREATE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_btrfs_subvolume_create_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_create", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_subvolume_create", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_create", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SUBVOLUME_CREATE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_create", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_create", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_subvolume_create", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_subvolume_create",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_subvolume_create");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_filesystem_sync (guestfs_h *g,
                               const char *fs)
{
  struct guestfs_btrfs_filesystem_sync_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_filesystem_sync", 21);
  if (fs == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_filesystem_sync", "fs");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_filesystem_sync");
    fprintf (trace_buffer.fp, " \"%s\"", fs);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_filesystem_sync") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_sync", "-1");
    return -1;
  }

  args.fs = (char *) fs;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_FILESYSTEM_SYNC,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_filesystem_sync_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_sync", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_filesystem_sync", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_sync", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_FILESYSTEM_SYNC, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_sync", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_sync", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_filesystem_sync", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_filesystem_sync",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_filesystem_sync");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_filesystem_available (guestfs_h *g,
                              const char *filesystem)
{
  struct guestfs_filesystem_available_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_filesystem_available_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "filesystem_available", 20);
  if (filesystem == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "filesystem_available", "filesystem");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "filesystem_available");
    fprintf (trace_buffer.fp, " \"%s\"", filesystem);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "filesystem_available") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "filesystem_available", "-1");
    return -1;
  }

  args.filesystem = (char *) filesystem;
  serial = guestfs_int_send (g, GUESTFS_PROC_FILESYSTEM_AVAILABLE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_filesystem_available_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "filesystem_available", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "filesystem_available", &hdr, &err,
        (xdrproc_t) xdr_guestfs_filesystem_available_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "filesystem_available", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FILESYSTEM_AVAILABLE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "filesystem_available", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "filesystem_available", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "filesystem_available", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "filesystem_available",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.fsavail;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "filesystem_available");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_pvchange_uuid_all (guestfs_h *g)
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
                                    "pvchange_uuid_all", 17);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "pvchange_uuid_all");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "pvchange_uuid_all") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvchange_uuid_all", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_PVCHANGE_UUID_ALL, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvchange_uuid_all", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "pvchange_uuid_all", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvchange_uuid_all", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PVCHANGE_UUID_ALL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvchange_uuid_all", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvchange_uuid_all", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "pvchange_uuid_all", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "pvchange_uuid_all",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "pvchange_uuid_all");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int64_t
guestfs_hivex_node_get_value (guestfs_h *g,
                              int64_t nodeh,
                              const char *key)
{
  struct guestfs_hivex_node_get_value_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_hivex_node_get_value_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "hivex_node_get_value", 20);
  if (key == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "hivex_node_get_value", "key");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "hivex_node_get_value");
    fprintf (trace_buffer.fp, " %" PRIi64, nodeh);
    fprintf (trace_buffer.fp, " \"%s\"", key);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "hivex_node_get_value") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_get_value", "-1");
    return -1;
  }

  args.nodeh = nodeh;
  args.key = (char *) key;
  serial = guestfs_int_send (g, GUESTFS_PROC_HIVEX_NODE_GET_VALUE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_hivex_node_get_value_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_get_value", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "hivex_node_get_value", &hdr, &err,
        (xdrproc_t) xdr_guestfs_hivex_node_get_value_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_get_value", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_HIVEX_NODE_GET_VALUE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_get_value", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_get_value", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "hivex_node_get_value", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "hivex_node_get_value",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.valueh;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "hivex_node_get_value");
    fprintf (trace_buffer.fp, "%" PRIi64, ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_mktemp_argv (guestfs_h *g,
                     const char *tmpl,
                     const struct guestfs_mktemp_argv *optargs)
{
  struct guestfs_mktemp_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_mktemp_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_mktemp_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mktemp", 6);
  if (tmpl == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mktemp", "tmpl");
    return NULL;
  }
  if ((optargs->bitmask & GUESTFS_MKTEMP_SUFFIX_BITMASK) &&
      optargs->suffix == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mktemp", "suffix");
    return NULL;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "mktemp", "mktemp");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mktemp");
    fprintf (trace_buffer.fp, " \"%s\"", tmpl);
    if (optargs->bitmask & GUESTFS_MKTEMP_SUFFIX_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "suffix", optargs->suffix);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mktemp") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mktemp", "NULL");
    return NULL;
  }

  args.tmpl = (char *) tmpl;
  if (optargs->bitmask & GUESTFS_MKTEMP_SUFFIX_BITMASK) {
    args.suffix = (char *) optargs->suffix;
  } else {
    args.suffix = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_MKTEMP,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_mktemp_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mktemp", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "mktemp", &hdr, &err,
        (xdrproc_t) xdr_guestfs_mktemp_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mktemp", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKTEMP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mktemp", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mktemp", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mktemp", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mktemp",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.path; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mktemp");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_acl_set_file (guestfs_h *g,
                      const char *path,
                      const char *acltype,
                      const char *acl)
{
  struct guestfs_acl_set_file_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "acl_set_file", 12);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "acl_set_file", "path");
    return -1;
  }
  if (acltype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "acl_set_file", "acltype");
    return -1;
  }
  if (acl == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "acl_set_file", "acl");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "acl_set_file");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " \"%s\"", acltype);
    fprintf (trace_buffer.fp, " \"%s\"", acl);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "acl_set_file") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "acl_set_file", "-1");
    return -1;
  }

  args.path = (char *) path;
  args.acltype = (char *) acltype;
  args.acl = (char *) acl;
  serial = guestfs_int_send (g, GUESTFS_PROC_ACL_SET_FILE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_acl_set_file_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "acl_set_file", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "acl_set_file", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "acl_set_file", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ACL_SET_FILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "acl_set_file", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "acl_set_file", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "acl_set_file", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "acl_set_file",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "acl_set_file");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_list_ldm_volumes (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_list_ldm_volumes_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "list_ldm_volumes", 16);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "list_ldm_volumes");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "list_ldm_volumes") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_volumes", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LIST_LDM_VOLUMES, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_volumes", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "list_ldm_volumes", &hdr, &err,
        (xdrproc_t) xdr_guestfs_list_ldm_volumes_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_volumes", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LIST_LDM_VOLUMES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_volumes", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_volumes", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "list_ldm_volumes", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "list_ldm_volumes",
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
    fprintf (trace_buffer.fp, "%s = ", "list_ldm_volumes");
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
guestfs_list_ldm_partitions (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_list_ldm_partitions_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "list_ldm_partitions", 19);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "list_ldm_partitions");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "list_ldm_partitions") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_partitions", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LIST_LDM_PARTITIONS, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_partitions", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "list_ldm_partitions", &hdr, &err,
        (xdrproc_t) xdr_guestfs_list_ldm_partitions_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_partitions", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LIST_LDM_PARTITIONS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_partitions", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_ldm_partitions", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "list_ldm_partitions", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "list_ldm_partitions",
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
    fprintf (trace_buffer.fp, "%s = ", "list_ldm_partitions");
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
guestfs_ldmtool_volume_hint (guestfs_h *g,
                             const char *diskgroup,
                             const char *volume)
{
  struct guestfs_ldmtool_volume_hint_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_ldmtool_volume_hint_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ldmtool_volume_hint", 19);
  if (diskgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_volume_hint", "diskgroup");
    return NULL;
  }
  if (volume == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_volume_hint", "volume");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ldmtool_volume_hint");
    fprintf (trace_buffer.fp, " \"%s\"", diskgroup);
    fprintf (trace_buffer.fp, " \"%s\"", volume);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ldmtool_volume_hint") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_hint", "NULL");
    return NULL;
  }

  args.diskgroup = (char *) diskgroup;
  args.volume = (char *) volume;
  serial = guestfs_int_send (g, GUESTFS_PROC_LDMTOOL_VOLUME_HINT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ldmtool_volume_hint_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_hint", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "ldmtool_volume_hint", &hdr, &err,
        (xdrproc_t) xdr_guestfs_ldmtool_volume_hint_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_hint", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LDMTOOL_VOLUME_HINT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_hint", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_hint", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ldmtool_volume_hint", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ldmtool_volume_hint",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.hint; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ldmtool_volume_hint");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_aug_label (guestfs_h *g,
                   const char *augpath)
{
  struct guestfs_aug_label_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_aug_label_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_label", 9);
  if (augpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_label", "augpath");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_label");
    fprintf (trace_buffer.fp, " \"%s\"", augpath);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_label") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_label", "NULL");
    return NULL;
  }

  args.augpath = (char *) augpath;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_LABEL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_label_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_label", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "aug_label", &hdr, &err,
        (xdrproc_t) xdr_guestfs_aug_label_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_label", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_LABEL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_label", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_label", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_label", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_label",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.label; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_label");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_scrub_start (guestfs_h *g,
                           const char *path)
{
  struct guestfs_btrfs_scrub_start_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_scrub_start", 17);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_scrub_start", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_scrub_start");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_scrub_start") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_start", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SCRUB_START,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_scrub_start_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_start", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_scrub_start", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_start", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SCRUB_START, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_start", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_start", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_scrub_start", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_scrub_start",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_scrub_start");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_scrub_resume (guestfs_h *g,
                            const char *path)
{
  struct guestfs_btrfs_scrub_resume_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_scrub_resume", 18);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_scrub_resume", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_scrub_resume");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_scrub_resume") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_resume", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SCRUB_RESUME,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_scrub_resume_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_resume", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_scrub_resume", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_resume", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SCRUB_RESUME, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_resume", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_scrub_resume", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_scrub_resume", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_scrub_resume",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_scrub_resume");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_rescue_chunk_recover (guestfs_h *g,
                                    const char *device)
{
  struct guestfs_btrfs_rescue_chunk_recover_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_rescue_chunk_recover", 26);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_rescue_chunk_recover", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_rescue_chunk_recover");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_rescue_chunk_recover") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_rescue_chunk_recover", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_RESCUE_CHUNK_RECOVER,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_rescue_chunk_recover_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_rescue_chunk_recover", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_rescue_chunk_recover", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_rescue_chunk_recover", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_RESCUE_CHUNK_RECOVER, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_rescue_chunk_recover", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_rescue_chunk_recover", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_rescue_chunk_recover", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_rescue_chunk_recover",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_rescue_chunk_recover");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_uuid_random (guestfs_h *g,
                         const char *device)
{
  struct guestfs_set_uuid_random_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_uuid_random", 15);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_uuid_random", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_uuid_random");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "set_uuid_random") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_uuid_random", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_SET_UUID_RANDOM,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_set_uuid_random_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_uuid_random", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "set_uuid_random", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_uuid_random", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SET_UUID_RANDOM, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_uuid_random", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_uuid_random", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "set_uuid_random", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "set_uuid_random",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "set_uuid_random");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

