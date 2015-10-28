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

GUESTFS_DLL_PUBLIC int64_t
guestfs_internal_test_rint64err (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rint64err", 23);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rint64err");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rint64err (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rint64err");
      fprintf (trace_buffer.fp, "%" PRIi64, r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_rint64err", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC const char *
guestfs_internal_test_rconstoptstring (guestfs_h *g,
                                       const char *val)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  const char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rconstoptstring", 29);
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test_rconstoptstring", "val");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rconstoptstring");
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rconstoptstring (g, val);

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "internal_test_rconstoptstring");
    fprintf (trace_buffer.fp, "\"%s\"", r != NULL ? r : "NULL");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }


  return r;
}

GUESTFS_DLL_PUBLIC const char *
guestfs_internal_test_rconstoptstringerr (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  const char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rconstoptstringerr", 32);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rconstoptstringerr");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rconstoptstringerr (g);

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "internal_test_rconstoptstringerr");
    fprintf (trace_buffer.fp, "\"%s\"", r != NULL ? r : "NULL");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }


  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_internal_test_rhashtableerr (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rhashtableerr", 27);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rhashtableerr");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rhashtableerr (g);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rhashtableerr");
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
                         "internal_test_rhashtableerr", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_internal_test_rbufferouterr (guestfs_h *g,
                                     size_t *size_r)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rbufferouterr", 27);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rbufferouterr");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rbufferouterr (g, size_r);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rbufferouterr");
      guestfs_int_print_BufferOut (trace_buffer.fp, r, *size_r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_rbufferouterr", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_kill_subprocess (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "kill_subprocess", 15);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "kill_subprocess");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_kill_subprocess (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "kill_subprocess");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "kill_subprocess", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_hv (guestfs_h *g,
                const char *hv)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_hv");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_hv", 6);
  if (hv == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_hv", "hv");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_hv");
    fprintf (trace_buffer.fp, " \"%s\"", hv);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_hv (g, hv);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_hv");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_hv", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_append (guestfs_h *g,
                    const char *append)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_append");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_append", 10);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_append");
    if (append)
      fprintf (trace_buffer.fp, " \"%s\"", append);
    else
      fprintf (trace_buffer.fp, " null");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_append (g, append);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_append");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_append", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC const char *
guestfs_get_append (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  const char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_append", 10);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_append");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_append (g);

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "get_append");
    fprintf (trace_buffer.fp, "\"%s\"", r != NULL ? r : "NULL");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }


  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_get_verbose (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_verbose", 11);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_verbose");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_verbose (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_verbose");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_verbose", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_trace (guestfs_h *g,
                   int trace)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_trace", 9);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_trace");
    fputs (trace ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_trace (g, trace);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_trace");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_trace", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_add_drive_ro_with_if (guestfs_h *g,
                              const char *filename,
                              const char *iface)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "add_drive_ro_with_if");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "add_drive_ro_with_if", 20);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "add_drive_ro_with_if", "filename");
    return -1;
  }
  if (iface == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "add_drive_ro_with_if", "iface");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "add_drive_ro_with_if");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    fprintf (trace_buffer.fp, " \"%s\"", iface);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_add_drive_ro_with_if (g, filename, iface);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "add_drive_ro_with_if");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "add_drive_ro_with_if", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_inspect_get_arch (guestfs_h *g,
                          const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_arch", 16);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_arch", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_arch");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_arch (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_arch");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_arch", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_inspect_get_distro (guestfs_h *g,
                            const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_distro", 18);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_distro", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_distro");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_distro (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_distro");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_distro", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_list_filesystems (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "list_filesystems", 16);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "list_filesystems");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_list_filesystems (g);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "list_filesystems");
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
                         "list_filesystems", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_inspect_get_package_management (guestfs_h *g,
                                        const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_get_package_management", 30);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_get_package_management", "root");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_get_package_management");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_get_package_management (g, root);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_get_package_management");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_get_package_management", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_inspect_is_live (guestfs_h *g,
                         const char *root)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inspect_is_live", 15);
  if (root == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inspect_is_live", "root");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inspect_is_live");
    fprintf (trace_buffer.fp, " \"%s\"", root);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_inspect_is_live (g, root);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "inspect_is_live");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inspect_is_live", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_get_attach_method (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_attach_method", 17);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_attach_method");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_attach_method (g);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_attach_method");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_attach_method", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_pgroup (guestfs_h *g,
                    int pgroup)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_pgroup");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_pgroup", 10);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_pgroup");
    fputs (pgroup ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_pgroup (g, pgroup);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_pgroup");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_pgroup", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_get_pgroup (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_pgroup", 10);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_pgroup");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_pgroup (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_pgroup");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_pgroup", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_umount_local_argv (guestfs_h *g,
                           const struct guestfs_umount_local_argv *optargs)
{
  struct guestfs_umount_local_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "umount_local", 12);
  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "umount_local", "umount_local");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "umount_local");
    if (optargs->bitmask & GUESTFS_UMOUNT_LOCAL_RETRY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "retry", optargs->retry ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_umount_local (g, optargs);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "umount_local");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umount_local", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_max_disks (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "max_disks", 9);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "max_disks");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_max_disks (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "max_disks");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "max_disks", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_read_file (guestfs_h *g,
                   const char *path,
                   size_t *size_r)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "read_file", 9);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "read_file", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "read_file");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_read_file (g, path, size_r);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "read_file");
      guestfs_int_print_BufferOut (trace_buffer.fp, r, *size_r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "read_file", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_write (guestfs_h *g,
               const char *path,
               const char *content,
               size_t content_size)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "write", 5);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "write", "path");
    return -1;
  }
  if (content == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "write", "content");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "write");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fputc (' ', trace_buffer.fp);
    guestfs_int_print_BufferIn (trace_buffer.fp, content, content_size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_write (g, path, content, content_size);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "write");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "write", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC struct guestfs_stat_list *
guestfs_lstatlist (guestfs_h *g,
                   const char *path,
                   char *const *names)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_stat_list *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lstatlist", 9);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lstatlist", "path");
    return NULL;
  }
  if (names == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lstatlist", "names");
    return NULL;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lstatlist");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; names[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (names[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_lstatlist (g, path, names);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "lstatlist");
      fprintf (trace_buffer.fp, "<struct guestfs_stat_list *>");
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lstatlist", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_disk_has_backing_file (guestfs_h *g,
                               const char *filename)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "disk_has_backing_file", 21);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "disk_has_backing_file", "filename");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "disk_has_backing_file");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_disk_has_backing_file (g, filename);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "disk_has_backing_file");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "disk_has_backing_file", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_get_libvirt_requested_credential_defresult (guestfs_h *g,
                                                    int index)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_libvirt_requested_credential_defresult", 42);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_libvirt_requested_credential_defresult");
    fprintf (trace_buffer.fp, " %d", index);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_libvirt_requested_credential_defresult (g, index);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_libvirt_requested_credential_defresult");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_libvirt_requested_credential_defresult", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_parse_environment (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "parse_environment", 17);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "parse_environment");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_parse_environment (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "parse_environment");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "parse_environment", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_parse_environment_list (guestfs_h *g,
                                char *const *environment)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "parse_environment_list", 22);
  if (environment == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "parse_environment_list", "environment");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "parse_environment_list");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; environment[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (environment[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_parse_environment_list (g, environment);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "parse_environment_list");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "parse_environment_list", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_program (guestfs_h *g,
                     const char *program)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_program", 11);
  if (program == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_program", "program");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_program");
    fprintf (trace_buffer.fp, " \"%s\"", program);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_program (g, program);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_program");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_program", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC struct guestfs_xattr_list *
guestfs_journal_get (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_xattr_list *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "journal_get", 11);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "journal_get");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_journal_get (g);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "journal_get");
      fprintf (trace_buffer.fp, "<struct guestfs_xattr_list *>");
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_get", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_backend_settings (guestfs_h *g,
                              char *const *settings)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "set_backend_settings");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_backend_settings", 20);
  if (settings == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_backend_settings", "settings");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_backend_settings");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; settings[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (settings[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_backend_settings (g, settings);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_backend_settings");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_backend_settings", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_get_backend_setting (guestfs_h *g,
                             const char *name)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_backend_setting", 19);
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "get_backend_setting", "name");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_backend_setting");
    fprintf (trace_buffer.fp, " \"%s\"", name);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_backend_setting (g, name);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_backend_setting");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_backend_setting", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_list_partitions (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_list_partitions_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "list_partitions", 15);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "list_partitions");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "list_partitions") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_partitions", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LIST_PARTITIONS, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_partitions", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "list_partitions", &hdr, &err,
        (xdrproc_t) xdr_guestfs_list_partitions_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_partitions", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LIST_PARTITIONS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_partitions", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_partitions", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "list_partitions", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "list_partitions",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.partitions.partitions_val =
    safe_realloc (g, ret.partitions.partitions_val,
                  sizeof (char *) * (ret.partitions.partitions_len + 1));
  ret.partitions.partitions_val[ret.partitions.partitions_len] = NULL;
  ret_v = ret.partitions.partitions_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "list_partitions");
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

GUESTFS_DLL_PUBLIC struct guestfs_int_bool *
guestfs_aug_defnode (guestfs_h *g,
                     const char *name,
                     const char *expr,
                     const char *val)
{
  struct guestfs_aug_defnode_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_aug_defnode_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_int_bool *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_defnode", 11);
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_defnode", "name");
    return NULL;
  }
  if (expr == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_defnode", "expr");
    return NULL;
  }
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_defnode", "val");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_defnode");
    fprintf (trace_buffer.fp, " \"%s\"", name);
    fprintf (trace_buffer.fp, " \"%s\"", expr);
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_defnode") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defnode", "NULL");
    return NULL;
  }

  args.name = (char *) name;
  args.expr = (char *) expr;
  args.val = (char *) val;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_DEFNODE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_defnode_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defnode", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "aug_defnode", &hdr, &err,
        (xdrproc_t) xdr_guestfs_aug_defnode_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defnode", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_DEFNODE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defnode", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_defnode", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_defnode", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_defnode",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.nrnodescreated, sizeof (ret.nrnodescreated));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_defnode");
    fprintf (trace_buffer.fp, "<struct guestfs_int_bool *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_rm (guestfs_h *g,
            const char *path)
{
  struct guestfs_rm_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "rm", 2);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rm", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "rm");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "rm") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_RM,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_rm_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "rm", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RM, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rm", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "rm", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "rm",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "rm");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_umount_all (guestfs_h *g)
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
                                    "umount_all", 10);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "umount_all");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "umount_all") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umount_all", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_UMOUNT_ALL, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umount_all", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "umount_all", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umount_all", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_UMOUNT_ALL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umount_all", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "umount_all", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "umount_all", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "umount_all",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "umount_all");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_file (guestfs_h *g,
              const char *path)
{
  struct guestfs_file_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_file_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "file", 4);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "file", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "file");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "file") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "file", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_FILE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_file_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "file", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "file", &hdr, &err,
        (xdrproc_t) xdr_guestfs_file_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "file", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "file", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "file", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "file", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "file",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.description; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "file");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_command (guestfs_h *g,
                 char *const *arguments)
{
  struct guestfs_command_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_command_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "command", 7);
  if (arguments == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "command", "arguments");
    return NULL;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "command");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; arguments[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (arguments[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "command") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command", "NULL");
    return NULL;
  }

  args.arguments.arguments_val = (char **) arguments;
  for (args.arguments.arguments_len = 0; arguments[args.arguments.arguments_len]; args.arguments.arguments_len++) ;
  serial = guestfs_int_send (g, GUESTFS_PROC_COMMAND,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_command_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "command", &hdr, &err,
        (xdrproc_t) xdr_guestfs_command_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COMMAND, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "command", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "command", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "command",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.output; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "command");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_blockdev_setbsz (guestfs_h *g,
                         const char *device,
                         int blocksize)
{
  struct guestfs_blockdev_setbsz_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blockdev_setbsz", 15);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blockdev_setbsz", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blockdev_setbsz");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", blocksize);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blockdev_setbsz") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setbsz", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.blocksize = blocksize;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLOCKDEV_SETBSZ,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blockdev_setbsz_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setbsz", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "blockdev_setbsz", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setbsz", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLOCKDEV_SETBSZ, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setbsz", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setbsz", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blockdev_setbsz", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blockdev_setbsz",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blockdev_setbsz");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_blockdev_flushbufs (guestfs_h *g,
                            const char *device)
{
  struct guestfs_blockdev_flushbufs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blockdev_flushbufs", 18);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blockdev_flushbufs", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blockdev_flushbufs");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blockdev_flushbufs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_flushbufs", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLOCKDEV_FLUSHBUFS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blockdev_flushbufs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_flushbufs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "blockdev_flushbufs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_flushbufs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLOCKDEV_FLUSHBUFS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_flushbufs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_flushbufs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blockdev_flushbufs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blockdev_flushbufs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blockdev_flushbufs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_tar_out_opts_argv (guestfs_h *g,
                           const char *directory,
                           const char *tarfile,
                           const struct guestfs_tar_out_opts_argv *optargs)
{
  struct guestfs_tar_out_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_tar_out_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "tar_out", 7);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tar_out_opts", "directory");
    return -1;
  }
  if (tarfile == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tar_out_opts", "tarfile");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_TAR_OUT_OPTS_COMPRESS_BITMASK) &&
      optargs->compress == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "tar_out_opts", "compress");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_TAR_OUT_OPTS_EXCLUDES_BITMASK) &&
      optargs->excludes == NULL) {
    error (g, "%s: %s: optional list cannot be NULL",
           "tar_out_opts", "excludes");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffff8)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "tar_out_opts", "tar_out_opts");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "tar_out");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    fprintf (trace_buffer.fp, " \"%s\"", tarfile);
    if (optargs->bitmask & GUESTFS_TAR_OUT_OPTS_COMPRESS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "compress", optargs->compress);
    }
    if (optargs->bitmask & GUESTFS_TAR_OUT_OPTS_NUMERICOWNER_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "numericowner", optargs->numericowner ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_TAR_OUT_OPTS_EXCLUDES_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:", "excludes");
      for (i = 0; optargs->excludes[i] != NULL; ++i) {
        if (i > 0) fputc (' ', trace_buffer.fp);
        fputs (optargs->excludes[i], trace_buffer.fp);
      }
      fputc ('\"', trace_buffer.fp);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "tar_out") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tar_out", "-1");
    return -1;
  }

  args.directory = (char *) directory;
  if (optargs->bitmask & GUESTFS_TAR_OUT_OPTS_COMPRESS_BITMASK) {
    args.compress = (char *) optargs->compress;
  } else {
    args.compress = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_TAR_OUT_OPTS_NUMERICOWNER_BITMASK) {
    args.numericowner = optargs->numericowner;
  } else {
    args.numericowner = 0;
  }
  if (optargs->bitmask & GUESTFS_TAR_OUT_OPTS_EXCLUDES_BITMASK) {
    args.excludes.excludes_val = (char **) optargs->excludes;
    for (args.excludes.excludes_len = 0; optargs->excludes[args.excludes.excludes_len]; args.excludes.excludes_len++) ;
  } else {
    args.excludes.excludes_len = 0;
    args.excludes.excludes_val = NULL;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_TAR_OUT,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_tar_out_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tar_out", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "tar_out", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tar_out", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TAR_OUT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tar_out", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tar_out", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "tar_out", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "tar_out",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, tarfile) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tar_out", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "tar_out");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_sfdisk_N (guestfs_h *g,
                  const char *device,
                  int partnum,
                  int cyls,
                  int heads,
                  int sectors,
                  const char *line)
{
  struct guestfs_sfdisk_N_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "sfdisk_N", 8);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "sfdisk_N", "device");
    return -1;
  }
  if (line == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "sfdisk_N", "line");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "sfdisk_N");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", partnum);
    fprintf (trace_buffer.fp, " %d", cyls);
    fprintf (trace_buffer.fp, " %d", heads);
    fprintf (trace_buffer.fp, " %d", sectors);
    fprintf (trace_buffer.fp, " \"%s\"", line);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "sfdisk_N") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_N", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.partnum = partnum;
  args.cyls = cyls;
  args.heads = heads;
  args.sectors = sectors;
  args.line = (char *) line;
  serial = guestfs_int_send (g, GUESTFS_PROC_SFDISK_N,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_sfdisk_N_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_N", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "sfdisk_N", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_N", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SFDISK_N, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_N", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sfdisk_N", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "sfdisk_N", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "sfdisk_N",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "sfdisk_N");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_e2fsck_f (guestfs_h *g,
                  const char *device)
{
  struct guestfs_e2fsck_f_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "e2fsck_f", 8);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "e2fsck_f", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "e2fsck_f");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "e2fsck_f") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck_f", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_E2FSCK_F,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_e2fsck_f_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck_f", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "e2fsck_f", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck_f", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_E2FSCK_F, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck_f", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "e2fsck_f", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "e2fsck_f", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "e2fsck_f",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "e2fsck_f");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_sh (guestfs_h *g,
            const char *command)
{
  struct guestfs_sh_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_sh_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "sh", 2);
  if (command == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "sh", "command");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "sh");
    fprintf (trace_buffer.fp, " \"%s\"", command);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "sh") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh", "NULL");
    return NULL;
  }

  args.command = (char *) command;
  serial = guestfs_int_send (g, GUESTFS_PROC_SH,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_sh_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "sh", &hdr, &err,
        (xdrproc_t) xdr_guestfs_sh_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SH, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "sh", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "sh", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "sh",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.output; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "sh");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_df (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_df_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "df", 2);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "df");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "df") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_DF, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "df", &hdr, &err,
        (xdrproc_t) xdr_guestfs_df_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_DF, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "df", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "df", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "df",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.output; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "df");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkswap_U (guestfs_h *g,
                  const char *uuid,
                  const char *device)
{
  struct guestfs_mkswap_U_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkswap_U", 8);
  if (uuid == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkswap_U", "uuid");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkswap_U", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkswap_U");
    fprintf (trace_buffer.fp, " \"%s\"", uuid);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkswap_U") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_U", "-1");
    return -1;
  }

  args.uuid = (char *) uuid;
  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKSWAP_U,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mkswap_U_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_U", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkswap_U", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_U", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKSWAP_U, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_U", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkswap_U", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkswap_U", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkswap_U",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkswap_U");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_rmmountpoint (guestfs_h *g,
                      const char *exemptpath)
{
  struct guestfs_rmmountpoint_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "rmmountpoint", 12);
  if (exemptpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rmmountpoint", "exemptpath");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "rmmountpoint");
    fprintf (trace_buffer.fp, " \"%s\"", exemptpath);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "rmmountpoint") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rmmountpoint", "-1");
    return -1;
  }

  args.exemptpath = (char *) exemptpath;
  serial = guestfs_int_send (g, GUESTFS_PROC_RMMOUNTPOINT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_rmmountpoint_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rmmountpoint", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "rmmountpoint", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rmmountpoint", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RMMOUNTPOINT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rmmountpoint", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rmmountpoint", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "rmmountpoint", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "rmmountpoint",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "rmmountpoint");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_zfgrep (guestfs_h *g,
                const char *pattern,
                const char *path)
{
  struct guestfs_zfgrep_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_zfgrep_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "zfgrep", 6);
  if (pattern == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zfgrep", "pattern");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zfgrep", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "zfgrep");
    fprintf (trace_buffer.fp, " \"%s\"", pattern);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "zfgrep") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrep", "NULL");
    return NULL;
  }

  args.pattern = (char *) pattern;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_ZFGREP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_zfgrep_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrep", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "zfgrep", &hdr, &err,
        (xdrproc_t) xdr_guestfs_zfgrep_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrep", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ZFGREP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrep", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfgrep", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "zfgrep", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "zfgrep",
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
    fprintf (trace_buffer.fp, "%s = ", "zfgrep");
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
guestfs_swapoff_file (guestfs_h *g,
                      const char *file)
{
  struct guestfs_swapoff_file_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "swapoff_file", 12);
  if (file == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "swapoff_file", "file");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "swapoff_file");
    fprintf (trace_buffer.fp, " \"%s\"", file);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "swapoff_file") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_file", "-1");
    return -1;
  }

  args.file = (char *) file;
  serial = guestfs_int_send (g, GUESTFS_PROC_SWAPOFF_FILE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_swapoff_file_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_file", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "swapoff_file", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_file", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SWAPOFF_FILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_file", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_file", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "swapoff_file", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "swapoff_file",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "swapoff_file");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_inotify_event_list *
guestfs_inotify_read (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_inotify_read_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_inotify_event_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inotify_read", 12);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inotify_read");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "inotify_read") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_read", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_INOTIFY_READ, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_read", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "inotify_read", &hdr, &err,
        (xdrproc_t) xdr_guestfs_inotify_read_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_read", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INOTIFY_READ, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_read", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_read", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "inotify_read", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "inotify_read",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.events, sizeof (ret.events));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "inotify_read");
    fprintf (trace_buffer.fp, "<struct guestfs_inotify_event_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_getcon (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_getcon_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "getcon", 6);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "getcon");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "getcon") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getcon", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_GETCON, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getcon", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "getcon", &hdr, &err,
        (xdrproc_t) xdr_guestfs_getcon_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getcon", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_GETCON, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getcon", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getcon", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "getcon", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "getcon",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.context; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "getcon");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mke2fs_JU (guestfs_h *g,
                   const char *fstype,
                   int blocksize,
                   const char *device,
                   const char *uuid)
{
  struct guestfs_mke2fs_JU_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mke2fs_JU", 9);
  if (fstype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_JU", "fstype");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_JU", "device");
    return -1;
  }
  if (uuid == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mke2fs_JU", "uuid");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mke2fs_JU");
    fprintf (trace_buffer.fp, " \"%s\"", fstype);
    fprintf (trace_buffer.fp, " %d", blocksize);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"%s\"", uuid);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mke2fs_JU") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JU", "-1");
    return -1;
  }

  args.fstype = (char *) fstype;
  args.blocksize = blocksize;
  args.device = (char *) device;
  args.uuid = (char *) uuid;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKE2FS_JU,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mke2fs_JU_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JU", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mke2fs_JU", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JU", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKE2FS_JU, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JU", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mke2fs_JU", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mke2fs_JU", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mke2fs_JU",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mke2fs_JU");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_xattr_list *
guestfs_internal_lxattrlist (guestfs_h *g,
                             const char *path,
                             char *const *names)
{
  struct guestfs_internal_lxattrlist_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_internal_lxattrlist_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_xattr_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_lxattrlist", 19);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_lxattrlist", "path");
    return NULL;
  }
  if (names == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_lxattrlist", "names");
    return NULL;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_lxattrlist");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; names[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (names[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "internal_lxattrlist") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_lxattrlist", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  args.names.names_val = (char **) names;
  for (args.names.names_len = 0; names[args.names.names_len]; args.names.names_len++) ;
  serial = guestfs_int_send (g, GUESTFS_PROC_INTERNAL_LXATTRLIST,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_internal_lxattrlist_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_lxattrlist", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "internal_lxattrlist", &hdr, &err,
        (xdrproc_t) xdr_guestfs_internal_lxattrlist_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_lxattrlist", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INTERNAL_LXATTRLIST, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_lxattrlist", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_lxattrlist", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "internal_lxattrlist", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "internal_lxattrlist",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.xattrs, sizeof (ret.xattrs));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "internal_lxattrlist");
    fprintf (trace_buffer.fp, "<struct guestfs_xattr_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_pread (guestfs_h *g,
               const char *path,
               int count,
               int64_t offset,
               size_t *size_r)
{
  struct guestfs_pread_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_pread_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "pread", 5);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "pread", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "pread");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " %d", count);
    fprintf (trace_buffer.fp, " %" PRIi64, offset);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "pread") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pread", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  args.count = count;
  args.offset = offset;
  serial = guestfs_int_send (g, GUESTFS_PROC_PREAD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_pread_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pread", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "pread", &hdr, &err,
        (xdrproc_t) xdr_guestfs_pread_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pread", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PREAD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pread", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pread", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "pread", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "pread",
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
  if (ret.content.content_len > 0) {
    *size_r = ret.content.content_len;
    ret_v = ret.content.content_val; /* caller will free */
  } else {
    free (ret.content.content_val);
    char *p = safe_malloc (g, 1);
    *size_r = ret.content.content_len;
    ret_v = p;
  }
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "pread");
    guestfs_int_print_BufferOut (trace_buffer.fp, ret_v, *size_r);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_fill (guestfs_h *g,
              int c,
              int len,
              const char *path)
{
  struct guestfs_fill_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "fill", 4);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "fill", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "fill");
    fprintf (trace_buffer.fp, " %d", c);
    fprintf (trace_buffer.fp, " %d", len);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "fill") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill", "-1");
    return -1;
  }

  args.c = c;
  args.len = len;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_FILL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_fill_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "fill", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FILL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fill", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "fill", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "fill",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "fill");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_vgrename (guestfs_h *g,
                  const char *volgroup,
                  const char *newvolgroup)
{
  struct guestfs_vgrename_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "vgrename", 8);
  if (volgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vgrename", "volgroup");
    return -1;
  }
  if (newvolgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vgrename", "newvolgroup");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vgrename");
    fprintf (trace_buffer.fp, " \"%s\"", volgroup);
    fprintf (trace_buffer.fp, " \"%s\"", newvolgroup);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vgrename") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgrename", "-1");
    return -1;
  }

  args.volgroup = (char *) volgroup;
  args.newvolgroup = (char *) newvolgroup;
  serial = guestfs_int_send (g, GUESTFS_PROC_VGRENAME,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_vgrename_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgrename", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "vgrename", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgrename", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VGRENAME, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgrename", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgrename", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vgrename", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vgrename",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vgrename");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_vglvuuids (guestfs_h *g,
                   const char *vgname)
{
  struct guestfs_vglvuuids_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_vglvuuids_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "vglvuuids", 9);
  if (vgname == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vglvuuids", "vgname");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vglvuuids");
    fprintf (trace_buffer.fp, " \"%s\"", vgname);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vglvuuids") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vglvuuids", "NULL");
    return NULL;
  }

  args.vgname = (char *) vgname;
  serial = guestfs_int_send (g, GUESTFS_PROC_VGLVUUIDS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_vglvuuids_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vglvuuids", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "vglvuuids", &hdr, &err,
        (xdrproc_t) xdr_guestfs_vglvuuids_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vglvuuids", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VGLVUUIDS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vglvuuids", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vglvuuids", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vglvuuids", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vglvuuids",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.uuids.uuids_val =
    safe_realloc (g, ret.uuids.uuids_val,
                  sizeof (char *) * (ret.uuids.uuids_len + 1));
  ret.uuids.uuids_val[ret.uuids.uuids_len] = NULL;
  ret_v = ret.uuids.uuids_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vglvuuids");
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
guestfs_checksum_device (guestfs_h *g,
                         const char *csumtype,
                         const char *device)
{
  struct guestfs_checksum_device_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_checksum_device_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "checksum_device", 15);
  if (csumtype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "checksum_device", "csumtype");
    return NULL;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "checksum_device", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "checksum_device");
    fprintf (trace_buffer.fp, " \"%s\"", csumtype);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "checksum_device") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum_device", "NULL");
    return NULL;
  }

  args.csumtype = (char *) csumtype;
  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_CHECKSUM_DEVICE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_checksum_device_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum_device", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "checksum_device", &hdr, &err,
        (xdrproc_t) xdr_guestfs_checksum_device_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum_device", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CHECKSUM_DEVICE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum_device", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksum_device", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "checksum_device", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "checksum_device",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.checksum; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "checksum_device");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_pwrite (guestfs_h *g,
                const char *path,
                const char *content,
                size_t content_size,
                int64_t offset)
{
  struct guestfs_pwrite_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_pwrite_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "pwrite", 6);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "pwrite", "path");
    return -1;
  }
  if (content == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "pwrite", "content");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "pwrite");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fputc (' ', trace_buffer.fp);
    guestfs_int_print_BufferIn (trace_buffer.fp, content, content_size);
    fprintf (trace_buffer.fp, " %" PRIi64, offset);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "pwrite") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite", "-1");
    return -1;
  }

  args.path = (char *) path;
  /* Just catch grossly large sizes. XDR encoding will make this precise. */
  if (content_size >= GUESTFS_MESSAGE_MAX) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite", "-1");
    error (g, "%s: size of input buffer too large", "pwrite");
    return -1;
  }
  args.content.content_val = (char *) content;
  args.content.content_len = content_size;
  args.offset = offset;
  serial = guestfs_int_send (g, GUESTFS_PROC_PWRITE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_pwrite_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "pwrite", &hdr, &err,
        (xdrproc_t) xdr_guestfs_pwrite_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PWRITE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "pwrite", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "pwrite",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.nbytes;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "pwrite");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_luks_format (guestfs_h *g,
                     const char *device,
                     const char *key,
                     int keyslot)
{
  struct guestfs_luks_format_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "luks_format", 11);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "luks_format", "device");
    return -1;
  }
  if (key == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "luks_format", "key");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "luks_format");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"***\"");
    fprintf (trace_buffer.fp, " %d", keyslot);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "luks_format") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.key = (char *) key;
  args.keyslot = keyslot;
  serial = guestfs_int_send (g, GUESTFS_PROC_LUKS_FORMAT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_luks_format_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "luks_format", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LUKS_FORMAT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "luks_format", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "luks_format",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "luks_format");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_luks_kill_slot (guestfs_h *g,
                        const char *device,
                        const char *key,
                        int keyslot)
{
  struct guestfs_luks_kill_slot_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "luks_kill_slot", 14);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "luks_kill_slot", "device");
    return -1;
  }
  if (key == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "luks_kill_slot", "key");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "luks_kill_slot");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"***\"");
    fprintf (trace_buffer.fp, " %d", keyslot);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "luks_kill_slot") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_kill_slot", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.key = (char *) key;
  args.keyslot = keyslot;
  serial = guestfs_int_send (g, GUESTFS_PROC_LUKS_KILL_SLOT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_luks_kill_slot_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_kill_slot", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "luks_kill_slot", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_kill_slot", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LUKS_KILL_SLOT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_kill_slot", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_kill_slot", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "luks_kill_slot", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "luks_kill_slot",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "luks_kill_slot");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_findfs_uuid (guestfs_h *g,
                     const char *uuid)
{
  struct guestfs_findfs_uuid_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_findfs_uuid_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "findfs_uuid", 11);
  if (uuid == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "findfs_uuid", "uuid");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "findfs_uuid");
    fprintf (trace_buffer.fp, " \"%s\"", uuid);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "findfs_uuid") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_uuid", "NULL");
    return NULL;
  }

  args.uuid = (char *) uuid;
  serial = guestfs_int_send (g, GUESTFS_PROC_FINDFS_UUID,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_findfs_uuid_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_uuid", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "findfs_uuid", &hdr, &err,
        (xdrproc_t) xdr_guestfs_findfs_uuid_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_uuid", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FINDFS_UUID, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_uuid", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_uuid", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "findfs_uuid", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "findfs_uuid",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.device; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "findfs_uuid");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_findfs_label (guestfs_h *g,
                      const char *label)
{
  struct guestfs_findfs_label_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_findfs_label_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "findfs_label", 12);
  if (label == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "findfs_label", "label");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "findfs_label");
    fprintf (trace_buffer.fp, " \"%s\"", label);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "findfs_label") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_label", "NULL");
    return NULL;
  }

  args.label = (char *) label;
  serial = guestfs_int_send (g, GUESTFS_PROC_FINDFS_LABEL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_findfs_label_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_label", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "findfs_label", &hdr, &err,
        (xdrproc_t) xdr_guestfs_findfs_label_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_label", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FINDFS_LABEL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_label", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "findfs_label", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "findfs_label", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "findfs_label",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.device; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "findfs_label");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_fifo_opts_argv (guestfs_h *g,
                           const char *path,
                           const struct guestfs_is_fifo_opts_argv *optargs)
{
  struct guestfs_is_fifo_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_is_fifo_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_fifo_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_fifo", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_fifo_opts", "path");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "is_fifo_opts", "is_fifo_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_fifo");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    if (optargs->bitmask & GUESTFS_IS_FIFO_OPTS_FOLLOWSYMLINKS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "followsymlinks", optargs->followsymlinks ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_fifo") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_fifo", "-1");
    return -1;
  }

  args.path = (char *) path;
  if (optargs->bitmask & GUESTFS_IS_FIFO_OPTS_FOLLOWSYMLINKS_BITMASK) {
    args.followsymlinks = optargs->followsymlinks;
  } else {
    args.followsymlinks = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_FIFO,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_is_fifo_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_fifo", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_fifo", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_fifo_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_fifo", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_FIFO, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_fifo", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_fifo", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_fifo", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_fifo",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.flag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_fifo");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_socket_opts_argv (guestfs_h *g,
                             const char *path,
                             const struct guestfs_is_socket_opts_argv *optargs)
{
  struct guestfs_is_socket_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_is_socket_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_socket_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_socket", 9);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_socket_opts", "path");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "is_socket_opts", "is_socket_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_socket");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    if (optargs->bitmask & GUESTFS_IS_SOCKET_OPTS_FOLLOWSYMLINKS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "followsymlinks", optargs->followsymlinks ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_socket") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_socket", "-1");
    return -1;
  }

  args.path = (char *) path;
  if (optargs->bitmask & GUESTFS_IS_SOCKET_OPTS_FOLLOWSYMLINKS_BITMASK) {
    args.followsymlinks = optargs->followsymlinks;
  } else {
    args.followsymlinks = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_SOCKET,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_is_socket_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_socket", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_socket", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_socket_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_socket", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_SOCKET, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_socket", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_socket", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_socket", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_socket",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.flag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_socket");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_pwrite_device (guestfs_h *g,
                       const char *device,
                       const char *content,
                       size_t content_size,
                       int64_t offset)
{
  struct guestfs_pwrite_device_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_pwrite_device_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "pwrite_device", 13);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "pwrite_device", "device");
    return -1;
  }
  if (content == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "pwrite_device", "content");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "pwrite_device");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fputc (' ', trace_buffer.fp);
    guestfs_int_print_BufferIn (trace_buffer.fp, content, content_size);
    fprintf (trace_buffer.fp, " %" PRIi64, offset);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "pwrite_device") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite_device", "-1");
    return -1;
  }

  args.device = (char *) device;
  /* Just catch grossly large sizes. XDR encoding will make this precise. */
  if (content_size >= GUESTFS_MESSAGE_MAX) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite_device", "-1");
    error (g, "%s: size of input buffer too large", "pwrite_device");
    return -1;
  }
  args.content.content_val = (char *) content;
  args.content.content_len = content_size;
  args.offset = offset;
  serial = guestfs_int_send (g, GUESTFS_PROC_PWRITE_DEVICE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_pwrite_device_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite_device", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "pwrite_device", &hdr, &err,
        (xdrproc_t) xdr_guestfs_pwrite_device_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite_device", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PWRITE_DEVICE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite_device", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pwrite_device", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "pwrite_device", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "pwrite_device",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.nbytes;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "pwrite_device");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_lvm_canonical_lv_name (guestfs_h *g,
                               const char *lvname)
{
  struct guestfs_lvm_canonical_lv_name_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_lvm_canonical_lv_name_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lvm_canonical_lv_name", 21);
  if (lvname == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lvm_canonical_lv_name", "lvname");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvm_canonical_lv_name");
    fprintf (trace_buffer.fp, " \"%s\"", lvname);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvm_canonical_lv_name") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_canonical_lv_name", "NULL");
    return NULL;
  }

  args.lvname = (char *) lvname;
  serial = guestfs_int_send (g, GUESTFS_PROC_LVM_CANONICAL_LV_NAME,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lvm_canonical_lv_name_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_canonical_lv_name", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "lvm_canonical_lv_name", &hdr, &err,
        (xdrproc_t) xdr_guestfs_lvm_canonical_lv_name_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_canonical_lv_name", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVM_CANONICAL_LV_NAME, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_canonical_lv_name", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_canonical_lv_name", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvm_canonical_lv_name", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvm_canonical_lv_name",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.lv; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvm_canonical_lv_name");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_zero_device (guestfs_h *g,
                        const char *device)
{
  struct guestfs_is_zero_device_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_zero_device_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_zero_device", 14);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_zero_device", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_zero_device");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_zero_device") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_zero_device", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_ZERO_DEVICE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_is_zero_device_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_zero_device", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_zero_device", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_zero_device_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_zero_device", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_ZERO_DEVICE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_zero_device", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_zero_device", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_zero_device", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_zero_device",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.zeroflag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_zero_device");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_copy_file_to_device_argv (guestfs_h *g,
                                  const char *src,
                                  const char *dest,
                                  const struct guestfs_copy_file_to_device_argv *optargs)
{
  struct guestfs_copy_file_to_device_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_copy_file_to_device_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "copy_file_to_device", 19);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_file_to_device", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_file_to_device", "dest");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffffe0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "copy_file_to_device", "copy_file_to_device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "copy_file_to_device");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_SRCOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "srcoffset", optargs->srcoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_DESTOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "destoffset", optargs->destoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_SIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "size", optargs->size);
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_SPARSE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "sparse", optargs->sparse ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_APPEND_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "append", optargs->append ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "copy_file_to_device") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_device", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_SRCOFFSET_BITMASK) {
    args.srcoffset = optargs->srcoffset;
  } else {
    args.srcoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_DESTOFFSET_BITMASK) {
    args.destoffset = optargs->destoffset;
  } else {
    args.destoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_SIZE_BITMASK) {
    args.size = optargs->size;
  } else {
    args.size = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_SPARSE_BITMASK) {
    args.sparse = optargs->sparse;
  } else {
    args.sparse = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_FILE_TO_DEVICE_APPEND_BITMASK) {
    args.append = optargs->append;
  } else {
    args.append = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_COPY_FILE_TO_DEVICE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_copy_file_to_device_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_device", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "copy_file_to_device", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_device", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COPY_FILE_TO_DEVICE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_device", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_file_to_device", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "copy_file_to_device", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "copy_file_to_device",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "copy_file_to_device");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_md_stop (guestfs_h *g,
                 const char *md)
{
  struct guestfs_md_stop_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "md_stop", 7);
  if (md == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "md_stop", "md");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "md_stop");
    fprintf (trace_buffer.fp, " \"%s\"", md);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "md_stop") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_stop", "-1");
    return -1;
  }

  args.md = (char *) md;
  serial = guestfs_int_send (g, GUESTFS_PROC_MD_STOP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_md_stop_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_stop", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "md_stop", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_stop", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MD_STOP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_stop", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_stop", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "md_stop", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "md_stop",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "md_stop");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_blkid (guestfs_h *g,
               const char *device)
{
  struct guestfs_blkid_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_blkid_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blkid", 5);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blkid", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blkid");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blkid") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkid", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLKID,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blkid_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkid", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "blkid", &hdr, &err,
        (xdrproc_t) xdr_guestfs_blkid_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkid", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLKID, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkid", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkid", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blkid", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blkid",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.info.info_val =
    safe_realloc (g, ret.info.info_val,
                  sizeof (char *) * (ret.info.info_len + 1));
  ret.info.info_val[ret.info.info_len] = NULL;
  ret_v = ret.info.info_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blkid");
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
guestfs_wipefs (guestfs_h *g,
                const char *device)
{
  struct guestfs_wipefs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "wipefs", 6);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "wipefs", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "wipefs");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "wipefs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wipefs", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_WIPEFS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_wipefs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wipefs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "wipefs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wipefs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_WIPEFS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wipefs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wipefs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "wipefs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "wipefs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "wipefs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ntfsclone_in (guestfs_h *g,
                      const char *backupfile,
                      const char *device)
{
  struct guestfs_ntfsclone_in_args args;
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
                                    "ntfsclone_in", 12);
  if (backupfile == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ntfsclone_in", "backupfile");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ntfsclone_in", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ntfsclone_in");
    fprintf (trace_buffer.fp, " \"%s\"", backupfile);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (stat (backupfile, &progress_stat) == 0 &&
      S_ISREG (progress_stat.st_mode))
    progress_hint += progress_stat.st_size;

  if (guestfs_int_check_appliance_up (g, "ntfsclone_in") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsclone_in", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_NTFSCLONE_IN,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ntfsclone_in_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsclone_in", "-1");
    return -1;
  }

  r = guestfs_int_send_file (g, backupfile);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsclone_in", "-1");
    /* daemon will send an error reply which we discard */
    guestfs_int_recv_discard (g, "ntfsclone_in");
    return -1;
  }
  if (r == -2) /* daemon cancelled */
    goto read_reply;

 read_reply:
  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ntfsclone_in", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsclone_in", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_NTFSCLONE_IN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsclone_in", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsclone_in", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ntfsclone_in", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ntfsclone_in",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ntfsclone_in");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_isoinfo *
guestfs_isoinfo (guestfs_h *g,
                 const char *isofile)
{
  struct guestfs_isoinfo_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_isoinfo_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_isoinfo *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "isoinfo", 7);
  if (isofile == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "isoinfo", "isofile");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "isoinfo");
    fprintf (trace_buffer.fp, " \"%s\"", isofile);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "isoinfo") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "isoinfo", "NULL");
    return NULL;
  }

  args.isofile = (char *) isofile;
  serial = guestfs_int_send (g, GUESTFS_PROC_ISOINFO,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_isoinfo_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "isoinfo", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "isoinfo", &hdr, &err,
        (xdrproc_t) xdr_guestfs_isoinfo_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "isoinfo", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ISOINFO, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "isoinfo", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "isoinfo", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "isoinfo", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "isoinfo",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.isodata, sizeof (ret.isodata));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "isoinfo");
    fprintf (trace_buffer.fp, "<struct guestfs_isoinfo *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int64_t
guestfs_get_e2generation (guestfs_h *g,
                          const char *file)
{
  struct guestfs_get_e2generation_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_get_e2generation_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_e2generation", 16);
  if (file == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "get_e2generation", "file");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_e2generation");
    fprintf (trace_buffer.fp, " \"%s\"", file);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "get_e2generation") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2generation", "-1");
    return -1;
  }

  args.file = (char *) file;
  serial = guestfs_int_send (g, GUESTFS_PROC_GET_E2GENERATION,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_get_e2generation_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2generation", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "get_e2generation", &hdr, &err,
        (xdrproc_t) xdr_guestfs_get_e2generation_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2generation", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_GET_E2GENERATION, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2generation", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2generation", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "get_e2generation", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "get_e2generation",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.generation;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "get_e2generation");
    fprintf (trace_buffer.fp, "%" PRIi64, ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_device_delete (guestfs_h *g,
                             char *const *devices,
                             const char *fs)
{
  struct guestfs_btrfs_device_delete_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_device_delete", 19);
  if (devices == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_device_delete", "devices");
    return -1;
  }
  if (fs == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_device_delete", "fs");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_device_delete");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; devices[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (devices[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    fprintf (trace_buffer.fp, " \"%s\"", fs);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_device_delete") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_device_delete", "-1");
    return -1;
  }

  args.devices.devices_val = (char **) devices;
  for (args.devices.devices_len = 0; devices[args.devices.devices_len]; args.devices.devices_len++) ;
  args.fs = (char *) fs;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_DEVICE_DELETE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_device_delete_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_device_delete", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_device_delete", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_device_delete", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_DEVICE_DELETE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_device_delete", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_device_delete", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_device_delete", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_device_delete",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_device_delete");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_rsync_argv (guestfs_h *g,
                    const char *src,
                    const char *dest,
                    const struct guestfs_rsync_argv *optargs)
{
  struct guestfs_rsync_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_rsync_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "rsync", 5);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rsync", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rsync", "dest");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "rsync", "rsync");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "rsync");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_RSYNC_ARCHIVE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "archive", optargs->archive ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_RSYNC_DELETEDEST_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "deletedest", optargs->deletedest ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "rsync") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_RSYNC_ARCHIVE_BITMASK) {
    args.archive = optargs->archive;
  } else {
    args.archive = 0;
  }
  if (optargs->bitmask & GUESTFS_RSYNC_DELETEDEST_BITMASK) {
    args.deletedest = optargs->deletedest;
  } else {
    args.deletedest = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_RSYNC,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_rsync_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "rsync", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RSYNC, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "rsync", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "rsync",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "rsync");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_rsync_out_argv (guestfs_h *g,
                        const char *src,
                        const char *remote,
                        const struct guestfs_rsync_out_argv *optargs)
{
  struct guestfs_rsync_out_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_rsync_out_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "rsync_out", 9);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rsync_out", "src");
    return -1;
  }
  if (remote == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "rsync_out", "remote");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "rsync_out", "rsync_out");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "rsync_out");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", remote);
    if (optargs->bitmask & GUESTFS_RSYNC_OUT_ARCHIVE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "archive", optargs->archive ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_RSYNC_OUT_DELETEDEST_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "deletedest", optargs->deletedest ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "rsync_out") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_out", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.remote = (char *) remote;
  if (optargs->bitmask & GUESTFS_RSYNC_OUT_ARCHIVE_BITMASK) {
    args.archive = optargs->archive;
  } else {
    args.archive = 0;
  }
  if (optargs->bitmask & GUESTFS_RSYNC_OUT_DELETEDEST_BITMASK) {
    args.deletedest = optargs->deletedest;
  } else {
    args.deletedest = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_RSYNC_OUT,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_rsync_out_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_out", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "rsync_out", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_out", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_RSYNC_OUT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_out", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "rsync_out", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "rsync_out", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "rsync_out",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "rsync_out");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_xfs_admin_argv (guestfs_h *g,
                        const char *device,
                        const struct guestfs_xfs_admin_argv *optargs)
{
  struct guestfs_xfs_admin_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_xfs_admin_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "xfs_admin", 9);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "xfs_admin", "device");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_XFS_ADMIN_LABEL_BITMASK) &&
      optargs->label == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "xfs_admin", "label");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_XFS_ADMIN_UUID_BITMASK) &&
      optargs->uuid == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "xfs_admin", "uuid");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffff80)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "xfs_admin", "xfs_admin");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "xfs_admin");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_XFS_ADMIN_EXTUNWRITTEN_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "extunwritten", optargs->extunwritten ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_ADMIN_IMGFILE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "imgfile", optargs->imgfile ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_ADMIN_V2LOG_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "v2log", optargs->v2log ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_ADMIN_PROJID32BIT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "projid32bit", optargs->projid32bit ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_ADMIN_LAZYCOUNTER_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "lazycounter", optargs->lazycounter ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_XFS_ADMIN_LABEL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "label", optargs->label);
    }
    if (optargs->bitmask & GUESTFS_XFS_ADMIN_UUID_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "uuid", optargs->uuid);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "xfs_admin") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_admin", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_XFS_ADMIN_EXTUNWRITTEN_BITMASK) {
    args.extunwritten = optargs->extunwritten;
  } else {
    args.extunwritten = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_ADMIN_IMGFILE_BITMASK) {
    args.imgfile = optargs->imgfile;
  } else {
    args.imgfile = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_ADMIN_V2LOG_BITMASK) {
    args.v2log = optargs->v2log;
  } else {
    args.v2log = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_ADMIN_PROJID32BIT_BITMASK) {
    args.projid32bit = optargs->projid32bit;
  } else {
    args.projid32bit = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_ADMIN_LAZYCOUNTER_BITMASK) {
    args.lazycounter = optargs->lazycounter;
  } else {
    args.lazycounter = 0;
  }
  if (optargs->bitmask & GUESTFS_XFS_ADMIN_LABEL_BITMASK) {
    args.label = (char *) optargs->label;
  } else {
    args.label = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_XFS_ADMIN_UUID_BITMASK) {
    args.uuid = (char *) optargs->uuid;
  } else {
    args.uuid = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_XFS_ADMIN,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_xfs_admin_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_admin", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "xfs_admin", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_admin", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_XFS_ADMIN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_admin", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "xfs_admin", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "xfs_admin", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "xfs_admin",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "xfs_admin");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_hivex_node_list *
guestfs_hivex_node_children (guestfs_h *g,
                             int64_t nodeh)
{
  struct guestfs_hivex_node_children_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_hivex_node_children_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_hivex_node_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "hivex_node_children", 19);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "hivex_node_children");
    fprintf (trace_buffer.fp, " %" PRIi64, nodeh);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "hivex_node_children") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_children", "NULL");
    return NULL;
  }

  args.nodeh = nodeh;
  serial = guestfs_int_send (g, GUESTFS_PROC_HIVEX_NODE_CHILDREN,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_hivex_node_children_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_children", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "hivex_node_children", &hdr, &err,
        (xdrproc_t) xdr_guestfs_hivex_node_children_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_children", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_HIVEX_NODE_CHILDREN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_children", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_children", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "hivex_node_children", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "hivex_node_children",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.nodehs, sizeof (ret.nodehs));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "hivex_node_children");
    fprintf (trace_buffer.fp, "<struct guestfs_hivex_node_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_hivex_node_set_value (guestfs_h *g,
                              int64_t nodeh,
                              const char *key,
                              int64_t t,
                              const char *val,
                              size_t val_size)
{
  struct guestfs_hivex_node_set_value_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "hivex_node_set_value", 20);
  if (key == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "hivex_node_set_value", "key");
    return -1;
  }
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "hivex_node_set_value", "val");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "hivex_node_set_value");
    fprintf (trace_buffer.fp, " %" PRIi64, nodeh);
    fprintf (trace_buffer.fp, " \"%s\"", key);
    fprintf (trace_buffer.fp, " %" PRIi64, t);
    fputc (' ', trace_buffer.fp);
    guestfs_int_print_BufferIn (trace_buffer.fp, val, val_size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "hivex_node_set_value") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_set_value", "-1");
    return -1;
  }

  args.nodeh = nodeh;
  args.key = (char *) key;
  args.t = t;
  /* Just catch grossly large sizes. XDR encoding will make this precise. */
  if (val_size >= GUESTFS_MESSAGE_MAX) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_set_value", "-1");
    error (g, "%s: size of input buffer too large", "hivex_node_set_value");
    return -1;
  }
  args.val.val_val = (char *) val;
  args.val.val_len = val_size;
  serial = guestfs_int_send (g, GUESTFS_PROC_HIVEX_NODE_SET_VALUE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_hivex_node_set_value_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_set_value", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "hivex_node_set_value", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_set_value", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_HIVEX_NODE_SET_VALUE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_set_value", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_set_value", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "hivex_node_set_value", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "hivex_node_set_value",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "hivex_node_set_value");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_list_disk_labels (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_list_disk_labels_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "list_disk_labels", 16);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "list_disk_labels");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "list_disk_labels") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_disk_labels", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LIST_DISK_LABELS, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_disk_labels", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "list_disk_labels", &hdr, &err,
        (xdrproc_t) xdr_guestfs_list_disk_labels_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_disk_labels", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LIST_DISK_LABELS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_disk_labels", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "list_disk_labels", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "list_disk_labels", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "list_disk_labels",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.labels.labels_val =
    safe_realloc (g, ret.labels.labels_val,
                  sizeof (char *) * (ret.labels.labels_len + 1));
  ret.labels.labels_val[ret.labels.labels_len] = NULL;
  ret_v = ret.labels.labels_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "list_disk_labels");
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
guestfs_ldmtool_diskgroup_volumes (guestfs_h *g,
                                   const char *diskgroup)
{
  struct guestfs_ldmtool_diskgroup_volumes_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_ldmtool_diskgroup_volumes_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ldmtool_diskgroup_volumes", 25);
  if (diskgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_diskgroup_volumes", "diskgroup");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ldmtool_diskgroup_volumes");
    fprintf (trace_buffer.fp, " \"%s\"", diskgroup);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ldmtool_diskgroup_volumes") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_diskgroup_volumes", "NULL");
    return NULL;
  }

  args.diskgroup = (char *) diskgroup;
  serial = guestfs_int_send (g, GUESTFS_PROC_LDMTOOL_DISKGROUP_VOLUMES,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ldmtool_diskgroup_volumes_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_diskgroup_volumes", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "ldmtool_diskgroup_volumes", &hdr, &err,
        (xdrproc_t) xdr_guestfs_ldmtool_diskgroup_volumes_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_diskgroup_volumes", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LDMTOOL_DISKGROUP_VOLUMES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_diskgroup_volumes", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_diskgroup_volumes", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ldmtool_diskgroup_volumes", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ldmtool_diskgroup_volumes",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.volumes.volumes_val =
    safe_realloc (g, ret.volumes.volumes_val,
                  sizeof (char *) * (ret.volumes.volumes_len + 1));
  ret.volumes.volumes_val[ret.volumes.volumes_len] = NULL;
  ret_v = ret.volumes.volumes_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ldmtool_diskgroup_volumes");
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
guestfs_ldmtool_volume_type (guestfs_h *g,
                             const char *diskgroup,
                             const char *volume)
{
  struct guestfs_ldmtool_volume_type_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_ldmtool_volume_type_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ldmtool_volume_type", 19);
  if (diskgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_volume_type", "diskgroup");
    return NULL;
  }
  if (volume == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_volume_type", "volume");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ldmtool_volume_type");
    fprintf (trace_buffer.fp, " \"%s\"", diskgroup);
    fprintf (trace_buffer.fp, " \"%s\"", volume);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ldmtool_volume_type") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_type", "NULL");
    return NULL;
  }

  args.diskgroup = (char *) diskgroup;
  args.volume = (char *) volume;
  serial = guestfs_int_send (g, GUESTFS_PROC_LDMTOOL_VOLUME_TYPE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ldmtool_volume_type_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_type", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "ldmtool_volume_type", &hdr, &err,
        (xdrproc_t) xdr_guestfs_ldmtool_volume_type_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_type", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LDMTOOL_VOLUME_TYPE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_type", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_type", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ldmtool_volume_type", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ldmtool_volume_type",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.voltype; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ldmtool_volume_type");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_part_set_gpt_type (guestfs_h *g,
                           const char *device,
                           int partnum,
                           const char *guid)
{
  struct guestfs_part_set_gpt_type_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_set_gpt_type", 17);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_set_gpt_type", "device");
    return -1;
  }
  if (guid == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_set_gpt_type", "guid");
    return -1;
  }

  if (!guestfs_int_validate_guid (guid)) {
    error (g, "%s: %s: parameter is not a valid GUID",
           "part_set_gpt_type", "guid");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_set_gpt_type");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", partnum);
    fprintf (trace_buffer.fp, " \"%s\"", guid);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_set_gpt_type") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_gpt_type", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.partnum = partnum;
  args.guid = (char *) guid;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_SET_GPT_TYPE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_set_gpt_type_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_gpt_type", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "part_set_gpt_type", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_gpt_type", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_SET_GPT_TYPE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_gpt_type", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_gpt_type", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_set_gpt_type", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_set_gpt_type",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_set_gpt_type");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_cp_r (guestfs_h *g,
              const char *src,
              const char *dest)
{
  struct guestfs_cp_r_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "cp_r", 4);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "cp_r", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "cp_r", "dest");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "cp_r");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "cp_r") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp_r", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  serial = guestfs_int_send (g, GUESTFS_PROC_CP_R,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_cp_r_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp_r", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "cp_r", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp_r", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CP_R, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp_r", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cp_r", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "cp_r", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "cp_r",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "cp_r");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_copy_attributes_argv (guestfs_h *g,
                              const char *src,
                              const char *dest,
                              const struct guestfs_copy_attributes_argv *optargs)
{
  struct guestfs_copy_attributes_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_copy_attributes_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "copy_attributes", 15);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_attributes", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_attributes", "dest");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffff0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "copy_attributes", "copy_attributes");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "copy_attributes");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_ALL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "all", optargs->all ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_MODE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "mode", optargs->mode ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_XATTRIBUTES_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "xattributes", optargs->xattributes ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_OWNERSHIP_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "ownership", optargs->ownership ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "copy_attributes") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_attributes", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_ALL_BITMASK) {
    args.all = optargs->all;
  } else {
    args.all = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_MODE_BITMASK) {
    args.mode = optargs->mode;
  } else {
    args.mode = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_XATTRIBUTES_BITMASK) {
    args.xattributes = optargs->xattributes;
  } else {
    args.xattributes = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_ATTRIBUTES_OWNERSHIP_BITMASK) {
    args.ownership = optargs->ownership;
  } else {
    args.ownership = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_COPY_ATTRIBUTES,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_copy_attributes_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_attributes", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "copy_attributes", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_attributes", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COPY_ATTRIBUTES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_attributes", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_attributes", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "copy_attributes", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "copy_attributes",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "copy_attributes");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_cpio_out_argv (guestfs_h *g,
                       const char *directory,
                       const char *cpiofile,
                       const struct guestfs_cpio_out_argv *optargs)
{
  struct guestfs_cpio_out_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_cpio_out_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "cpio_out", 8);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "cpio_out", "directory");
    return -1;
  }
  if (cpiofile == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "cpio_out", "cpiofile");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_CPIO_OUT_FORMAT_BITMASK) &&
      optargs->format == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "cpio_out", "format");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "cpio_out", "cpio_out");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "cpio_out");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    fprintf (trace_buffer.fp, " \"%s\"", cpiofile);
    if (optargs->bitmask & GUESTFS_CPIO_OUT_FORMAT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "format", optargs->format);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "cpio_out") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cpio_out", "-1");
    return -1;
  }

  args.directory = (char *) directory;
  if (optargs->bitmask & GUESTFS_CPIO_OUT_FORMAT_BITMASK) {
    args.format = (char *) optargs->format;
  } else {
    args.format = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_CPIO_OUT,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_cpio_out_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cpio_out", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "cpio_out", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cpio_out", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CPIO_OUT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cpio_out", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cpio_out", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "cpio_out", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "cpio_out",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, cpiofile) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "cpio_out", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "cpio_out");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_balance_pause (guestfs_h *g,
                             const char *path)
{
  struct guestfs_btrfs_balance_pause_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_balance_pause", 19);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_balance_pause", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_balance_pause");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_balance_pause") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_pause", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_BALANCE_PAUSE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_balance_pause_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_pause", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_balance_pause", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_pause", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_BALANCE_PAUSE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_pause", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_pause", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_balance_pause", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_balance_pause",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_balance_pause");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_filesystem_defragment_argv (guestfs_h *g,
                                          const char *path,
                                          const struct guestfs_btrfs_filesystem_defragment_argv *optargs)
{
  struct guestfs_btrfs_filesystem_defragment_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_btrfs_filesystem_defragment_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_filesystem_defragment", 27);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_filesystem_defragment", "path");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_COMPRESS_BITMASK) &&
      optargs->compress == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "btrfs_filesystem_defragment", "compress");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "btrfs_filesystem_defragment", "btrfs_filesystem_defragment");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_filesystem_defragment");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    if (optargs->bitmask & GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_FLUSH_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "flush", optargs->flush ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_COMPRESS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "compress", optargs->compress);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_filesystem_defragment") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_defragment", "-1");
    return -1;
  }

  args.path = (char *) path;
  if (optargs->bitmask & GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_FLUSH_BITMASK) {
    args.flush = optargs->flush;
  } else {
    args.flush = 0;
  }
  if (optargs->bitmask & GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_COMPRESS_BITMASK) {
    args.compress = (char *) optargs->compress;
  } else {
    args.compress = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_FILESYSTEM_DEFRAGMENT,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_btrfs_filesystem_defragment_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_defragment", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_filesystem_defragment", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_defragment", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_FILESYSTEM_DEFRAGMENT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_defragment", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_filesystem_defragment", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_filesystem_defragment", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_filesystem_defragment",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_filesystem_defragment");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfstune_enable_skinny_metadata_extent_refs (guestfs_h *g,
                                                      const char *device)
{
  struct guestfs_btrfstune_enable_skinny_metadata_extent_refs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfstune_enable_skinny_metadata_extent_refs", 44);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfstune_enable_skinny_metadata_extent_refs", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfstune_enable_skinny_metadata_extent_refs");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfstune_enable_skinny_metadata_extent_refs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfstune_enable_skinny_metadata_extent_refs", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFSTUNE_ENABLE_SKINNY_METADATA_EXTENT_REFS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfstune_enable_skinny_metadata_extent_refs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfstune_enable_skinny_metadata_extent_refs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfstune_enable_skinny_metadata_extent_refs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfstune_enable_skinny_metadata_extent_refs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFSTUNE_ENABLE_SKINNY_METADATA_EXTENT_REFS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfstune_enable_skinny_metadata_extent_refs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfstune_enable_skinny_metadata_extent_refs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfstune_enable_skinny_metadata_extent_refs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfstune_enable_skinny_metadata_extent_refs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfstune_enable_skinny_metadata_extent_refs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_part_get_mbr_part_type (guestfs_h *g,
                                const char *device,
                                int partnum)
{
  struct guestfs_part_get_mbr_part_type_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_part_get_mbr_part_type_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_get_mbr_part_type", 22);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_get_mbr_part_type", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_get_mbr_part_type");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", partnum);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_get_mbr_part_type") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_mbr_part_type", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  args.partnum = partnum;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_GET_MBR_PART_TYPE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_get_mbr_part_type_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_mbr_part_type", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "part_get_mbr_part_type", &hdr, &err,
        (xdrproc_t) xdr_guestfs_part_get_mbr_part_type_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_mbr_part_type", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_GET_MBR_PART_TYPE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_mbr_part_type", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_get_mbr_part_type", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_get_mbr_part_type", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_get_mbr_part_type",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.partitiontype; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_get_mbr_part_type");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

