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
guestfs_internal_test_rint (guestfs_h *g,
                            const char *val)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rint", 18);
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test_rint", "val");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rint");
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rint (g, val);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rint");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_rint", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC const char *
guestfs_internal_test_rconststring (guestfs_h *g,
                                    const char *val)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  const char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rconststring", 26);
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test_rconststring", "val");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rconststring");
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rconststring (g, val);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rconststring");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_rconststring", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_internal_test_rstringlist (guestfs_h *g,
                                   const char *val)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rstringlist", 25);
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test_rstringlist", "val");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rstringlist");
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rstringlist (g, val);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rstringlist");
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
                         "internal_test_rstringlist", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_internal_test_rbufferout (guestfs_h *g,
                                  const char *val,
                                  size_t *size_r)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_rbufferout", 24);
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test_rbufferout", "val");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_rbufferout");
    fprintf (trace_buffer.fp, " \"%s\"", val);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_rbufferout (g, val, size_r);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_rbufferout");
      guestfs_int_print_BufferOut (trace_buffer.fp, r, *size_r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_rbufferout", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_internal_test_set_output (guestfs_h *g,
                                  const char *filename)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "internal_test_set_output", 24);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_test_set_output", "filename");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_test_set_output");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_internal_test_set_output (g, filename);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "internal_test_set_output");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_test_set_output", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_get_hv (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_hv", 6);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_hv");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_hv (g);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_hv");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_hv", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_verbose (guestfs_h *g,
                     int verbose)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_verbose", 11);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_verbose");
    fputs (verbose ? " true" : " false", trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_verbose (g, verbose);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_verbose");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_verbose", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_get_state (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_state", 9);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_state");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_state (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_state");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_state", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_add_libvirt_dom_argv (guestfs_h *g,
                              void * /* really virDomainPtr */ dom,
                              const struct guestfs_add_libvirt_dom_argv *optargs)
{
  struct guestfs_add_libvirt_dom_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "add_libvirt_dom");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "add_libvirt_dom", 15);
  if (dom == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "add_libvirt_dom", "dom");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_IFACE_BITMASK) &&
      optargs->iface == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "add_libvirt_dom", "iface");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_READONLYDISK_BITMASK) &&
      optargs->readonlydisk == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "add_libvirt_dom", "readonlydisk");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_CACHEMODE_BITMASK) &&
      optargs->cachemode == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "add_libvirt_dom", "cachemode");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_DISCARD_BITMASK) &&
      optargs->discard == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "add_libvirt_dom", "discard");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffff80)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "add_libvirt_dom", "add_libvirt_dom");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "add_libvirt_dom");
    fprintf (trace_buffer.fp, " (virDomainPtr)%p", dom);
    if (optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_READONLY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "readonly", optargs->readonly ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_IFACE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "iface", optargs->iface);
    }
    if (optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_LIVE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "live", optargs->live ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_READONLYDISK_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "readonlydisk", optargs->readonlydisk);
    }
    if (optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_CACHEMODE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "cachemode", optargs->cachemode);
    }
    if (optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_DISCARD_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "discard", optargs->discard);
    }
    if (optargs->bitmask & GUESTFS_ADD_LIBVIRT_DOM_COPYONREAD_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "copyonread", optargs->copyonread ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_add_libvirt_dom (g, dom, optargs);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "add_libvirt_dom");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "add_libvirt_dom", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_mount_local_argv (guestfs_h *g,
                          const char *localmountpoint,
                          const struct guestfs_mount_local_argv *optargs)
{
  struct guestfs_mount_local_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mount_local", 11);
  if (localmountpoint == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_local", "localmountpoint");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MOUNT_LOCAL_OPTIONS_BITMASK) &&
      optargs->options == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mount_local", "options");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffff0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "mount_local", "mount_local");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mount_local");
    fprintf (trace_buffer.fp, " \"%s\"", localmountpoint);
    if (optargs->bitmask & GUESTFS_MOUNT_LOCAL_READONLY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "readonly", optargs->readonly ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_MOUNT_LOCAL_OPTIONS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "options", optargs->options);
    }
    if (optargs->bitmask & GUESTFS_MOUNT_LOCAL_CACHETIMEOUT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "cachetimeout", optargs->cachetimeout);
    }
    if (optargs->bitmask & GUESTFS_MOUNT_LOCAL_DEBUGCALLS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "debugcalls", optargs->debugcalls ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_mount_local (g, localmountpoint, optargs);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "mount_local");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_local", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_canonical_device_name (guestfs_h *g,
                               const char *device)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "canonical_device_name", 21);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "canonical_device_name", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "canonical_device_name");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_canonical_device_name (g, device);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "canonical_device_name");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "canonical_device_name", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_shutdown (guestfs_h *g)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "shutdown", 8);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "shutdown");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_shutdown (g);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "shutdown");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "shutdown", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char **
guestfs_readlinklist (guestfs_h *g,
                      const char *path,
                      char *const *names)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "readlinklist", 12);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "readlinklist", "path");
    return NULL;
  }
  if (names == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "readlinklist", "names");
    return NULL;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "readlinklist");
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

  r = guestfs_impl_readlinklist (g, path, names);

  if (r != NULL) {
    if (trace_flag) {
      size_t i;

      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "readlinklist");
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
                         "readlinklist", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_hivex_value_utf8 (guestfs_h *g,
                          int64_t valueh)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "hivex_value_utf8", 16);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "hivex_value_utf8");
    fprintf (trace_buffer.fp, " %" PRIi64, valueh);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_hivex_value_utf8 (g, valueh);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "hivex_value_utf8");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_value_utf8", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_libvirt_supported_credentials (guestfs_h *g,
                                           char *const *creds)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_libvirt_supported_credentials", 33);
  if (creds == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_libvirt_supported_credentials", "creds");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_libvirt_supported_credentials");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; creds[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (creds[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_libvirt_supported_credentials (g, creds);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_libvirt_supported_credentials");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_libvirt_supported_credentials", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_get_libvirt_requested_credential_prompt (guestfs_h *g,
                                                 int index)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_libvirt_requested_credential_prompt", 39);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_libvirt_requested_credential_prompt");
    fprintf (trace_buffer.fp, " %d", index);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_get_libvirt_requested_credential_prompt (g, index);

  if (r != NULL) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "get_libvirt_requested_credential_prompt");
      fprintf (trace_buffer.fp, "\"%s\"", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_libvirt_requested_credential_prompt", "NULL");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_libvirt_requested_credential (guestfs_h *g,
                                          int index,
                                          const char *cred,
                                          size_t cred_size)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_libvirt_requested_credential", 32);
  if (cred == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_libvirt_requested_credential", "cred");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_libvirt_requested_credential");
    fprintf (trace_buffer.fp, " %d", index);
    fputc (' ', trace_buffer.fp);
    guestfs_int_print_BufferIn (trace_buffer.fp, cred, cred_size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_set_libvirt_requested_credential (g, index, cred, cred_size);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "set_libvirt_requested_credential");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_libvirt_requested_credential", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_clear_backend_setting (guestfs_h *g,
                               const char *name)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  if (g->state != CONFIG) {
    error (g, "%s: this function can only be called in the config state",
              "clear_backend_setting");
    return -1;
  }
  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "clear_backend_setting", 21);
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "clear_backend_setting", "name");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "clear_backend_setting");
    fprintf (trace_buffer.fp, " \"%s\"", name);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_clear_backend_setting (g, name);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "clear_backend_setting");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "clear_backend_setting", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC int
guestfs_copy_in (guestfs_h *g,
                 const char *localpath,
                 const char *remotedir)
{
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int r;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "copy_in", 7);
  if (localpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_in", "localpath");
    return -1;
  }
  if (remotedir == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_in", "remotedir");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "copy_in");
    fprintf (trace_buffer.fp, " \"%s\"", localpath);
    fprintf (trace_buffer.fp, " \"%s\"", remotedir);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  r = guestfs_impl_copy_in (g, localpath, remotedir);

  if (r != -1) {
    if (trace_flag) {
      guestfs_int_trace_open (&trace_buffer);
      fprintf (trace_buffer.fp, "%s = ", "copy_in");
      fprintf (trace_buffer.fp, "%d", r);
      guestfs_int_trace_send_line (g, &trace_buffer);
    }

  } else {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_in", "-1");
  }

  return r;
}

GUESTFS_DLL_PUBLIC char *
guestfs_aug_get (guestfs_h *g,
                 const char *augpath)
{
  struct guestfs_aug_get_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_aug_get_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_get", 7);
  if (augpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_get", "augpath");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_get");
    fprintf (trace_buffer.fp, " \"%s\"", augpath);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_get") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_get", "NULL");
    return NULL;
  }

  args.augpath = (char *) augpath;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_GET,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_get_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_get", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "aug_get", &hdr, &err,
        (xdrproc_t) xdr_guestfs_aug_get_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_get", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_GET, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_get", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_get", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_get", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_get",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.val; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_get");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_aug_match (guestfs_h *g,
                   const char *augpath)
{
  struct guestfs_aug_match_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_aug_match_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_match", 9);
  if (augpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_match", "augpath");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_match");
    fprintf (trace_buffer.fp, " \"%s\"", augpath);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_match") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_match", "NULL");
    return NULL;
  }

  args.augpath = (char *) augpath;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_MATCH,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_match_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_match", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "aug_match", &hdr, &err,
        (xdrproc_t) xdr_guestfs_aug_match_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_match", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_MATCH, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_match", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_match", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_match", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_match",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.matches.matches_val =
    safe_realloc (g, ret.matches.matches_val,
                  sizeof (char *) * (ret.matches.matches_len + 1));
  ret.matches.matches_val[ret.matches.matches_len] = NULL;
  ret_v = ret.matches.matches_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_match");
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
guestfs_is_file_opts_argv (guestfs_h *g,
                           const char *path,
                           const struct guestfs_is_file_opts_argv *optargs)
{
  struct guestfs_is_file_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_is_file_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_file_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_file", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_file_opts", "path");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "is_file_opts", "is_file_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_file");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    if (optargs->bitmask & GUESTFS_IS_FILE_OPTS_FOLLOWSYMLINKS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "followsymlinks", optargs->followsymlinks ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_file") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_file", "-1");
    return -1;
  }

  args.path = (char *) path;
  if (optargs->bitmask & GUESTFS_IS_FILE_OPTS_FOLLOWSYMLINKS_BITMASK) {
    args.followsymlinks = optargs->followsymlinks;
  } else {
    args.followsymlinks = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_FILE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_is_file_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_file", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_file", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_file_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_file", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_FILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_file", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_file", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_file", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_file",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.fileflag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_file");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_mounts (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_mounts_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mounts", 6);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mounts");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mounts") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mounts", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_MOUNTS, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mounts", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "mounts", &hdr, &err,
        (xdrproc_t) xdr_guestfs_mounts_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mounts", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MOUNTS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mounts", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mounts", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mounts", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mounts",
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
    fprintf (trace_buffer.fp, "%s = ", "mounts");
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
guestfs_tune2fs_l (guestfs_h *g,
                   const char *device)
{
  struct guestfs_tune2fs_l_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_tune2fs_l_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "tune2fs_l", 9);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tune2fs_l", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "tune2fs_l");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "tune2fs_l") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs_l", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_TUNE2FS_L,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_tune2fs_l_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs_l", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "tune2fs_l", &hdr, &err,
        (xdrproc_t) xdr_guestfs_tune2fs_l_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs_l", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TUNE2FS_L, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs_l", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs_l", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "tune2fs_l", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "tune2fs_l",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.superblock.superblock_val =
    safe_realloc (g, ret.superblock.superblock_val,
                  sizeof (char *) * (ret.superblock.superblock_len + 1));
  ret.superblock.superblock_val[ret.superblock.superblock_len] = NULL;
  ret_v = ret.superblock.superblock_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "tune2fs_l");
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
guestfs_blockdev_setrw (guestfs_h *g,
                        const char *device)
{
  struct guestfs_blockdev_setrw_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blockdev_setrw", 14);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blockdev_setrw", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blockdev_setrw");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blockdev_setrw") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setrw", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLOCKDEV_SETRW,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blockdev_setrw_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setrw", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "blockdev_setrw", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setrw", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLOCKDEV_SETRW, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setrw", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_setrw", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blockdev_setrw", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blockdev_setrw",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blockdev_setrw");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_blockdev_getbsz (guestfs_h *g,
                         const char *device)
{
  struct guestfs_blockdev_getbsz_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_blockdev_getbsz_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blockdev_getbsz", 15);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blockdev_getbsz", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blockdev_getbsz");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blockdev_getbsz") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getbsz", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLOCKDEV_GETBSZ,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blockdev_getbsz_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getbsz", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "blockdev_getbsz", &hdr, &err,
        (xdrproc_t) xdr_guestfs_blockdev_getbsz_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getbsz", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLOCKDEV_GETBSZ, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getbsz", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blockdev_getbsz", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blockdev_getbsz", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blockdev_getbsz",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.blocksize;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blockdev_getbsz");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_tgz_out (guestfs_h *g,
                 const char *directory,
                 const char *tarball)
{
  struct guestfs_tgz_out_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "tgz_out", 7);
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tgz_out", "directory");
    return -1;
  }
  if (tarball == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tgz_out", "tarball");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "tgz_out");
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    fprintf (trace_buffer.fp, " \"%s\"", tarball);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "tgz_out") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_out", "-1");
    return -1;
  }

  args.directory = (char *) directory;
  serial = guestfs_int_send (g, GUESTFS_PROC_TGZ_OUT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_tgz_out_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_out", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "tgz_out", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_out", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TGZ_OUT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_out", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_out", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "tgz_out", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "tgz_out",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, tarball) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tgz_out", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "tgz_out");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mount_options (guestfs_h *g,
                       const char *options,
                       const char *mountable,
                       const char *mountpoint)
{
  struct guestfs_mount_options_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mount_options", 13);
  if (options == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_options", "options");
    return -1;
  }
  if (mountable == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_options", "mountable");
    return -1;
  }
  if (mountpoint == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mount_options", "mountpoint");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mount_options");
    fprintf (trace_buffer.fp, " \"%s\"", options);
    fprintf (trace_buffer.fp, " \"%s\"", mountable);
    fprintf (trace_buffer.fp, " \"%s\"", mountpoint);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mount_options") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_options", "-1");
    return -1;
  }

  args.options = (char *) options;
  args.mountable = (char *) mountable;
  args.mountpoint = (char *) mountpoint;
  serial = guestfs_int_send (g, GUESTFS_PROC_MOUNT_OPTIONS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mount_options_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_options", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mount_options", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_options", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MOUNT_OPTIONS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_options", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mount_options", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mount_options", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mount_options",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mount_options");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_get_e2label (guestfs_h *g,
                     const char *device)
{
  struct guestfs_get_e2label_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_get_e2label_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_e2label", 11);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "get_e2label", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_e2label");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "get_e2label") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2label", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_GET_E2LABEL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_get_e2label_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2label", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "get_e2label", &hdr, &err,
        (xdrproc_t) xdr_guestfs_get_e2label_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2label", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_GET_E2LABEL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2label", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2label", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "get_e2label", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "get_e2label",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.label; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "get_e2label");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_set_e2uuid (guestfs_h *g,
                    const char *device,
                    const char *uuid)
{
  struct guestfs_set_e2uuid_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "set_e2uuid", 10);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_e2uuid", "device");
    return -1;
  }
  if (uuid == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "set_e2uuid", "uuid");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "set_e2uuid");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"%s\"", uuid);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "set_e2uuid") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2uuid", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.uuid = (char *) uuid;
  serial = guestfs_int_send (g, GUESTFS_PROC_SET_E2UUID,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_set_e2uuid_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2uuid", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "set_e2uuid", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2uuid", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SET_E2UUID, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2uuid", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "set_e2uuid", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "set_e2uuid", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "set_e2uuid",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "set_e2uuid");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_get_e2uuid (guestfs_h *g,
                    const char *device)
{
  struct guestfs_get_e2uuid_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_get_e2uuid_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "get_e2uuid", 10);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "get_e2uuid", "device");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "get_e2uuid");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "get_e2uuid") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2uuid", "NULL");
    return NULL;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_GET_E2UUID,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_get_e2uuid_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2uuid", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "get_e2uuid", &hdr, &err,
        (xdrproc_t) xdr_guestfs_get_e2uuid_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2uuid", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_GET_E2UUID, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2uuid", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "get_e2uuid", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "get_e2uuid", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "get_e2uuid",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.uuid; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "get_e2uuid");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_drop_caches (guestfs_h *g,
                     int whattodrop)
{
  struct guestfs_drop_caches_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "drop_caches", 11);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "drop_caches");
    fprintf (trace_buffer.fp, " %d", whattodrop);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "drop_caches") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "drop_caches", "-1");
    return -1;
  }

  args.whattodrop = whattodrop;
  serial = guestfs_int_send (g, GUESTFS_PROC_DROP_CACHES,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_drop_caches_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "drop_caches", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "drop_caches", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "drop_caches", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_DROP_CACHES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "drop_caches", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "drop_caches", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "drop_caches", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "drop_caches",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "drop_caches");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_strings (guestfs_h *g,
                 const char *path)
{
  struct guestfs_strings_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_strings_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "strings", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "strings", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "strings");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "strings") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_STRINGS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_strings_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "strings", &hdr, &err,
        (xdrproc_t) xdr_guestfs_strings_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_STRINGS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "strings", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "strings", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "strings",
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
    fprintf (trace_buffer.fp, "%s = ", "strings");
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
guestfs_wc_l (guestfs_h *g,
              const char *path)
{
  struct guestfs_wc_l_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_wc_l_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "wc_l", 4);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "wc_l", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "wc_l");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "wc_l") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wc_l", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_WC_L,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_wc_l_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wc_l", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "wc_l", &hdr, &err,
        (xdrproc_t) xdr_guestfs_wc_l_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wc_l", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_WC_L, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wc_l", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "wc_l", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "wc_l", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "wc_l",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.lines;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "wc_l");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_zfile (guestfs_h *g,
               const char *meth,
               const char *path)
{
  struct guestfs_zfile_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_zfile_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "zfile", 5);
  if (meth == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zfile", "meth");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zfile", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "zfile");
    fprintf (trace_buffer.fp, " \"%s\"", meth);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "zfile") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfile", "NULL");
    return NULL;
  }

  args.meth = (char *) meth;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_ZFILE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_zfile_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfile", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "zfile", &hdr, &err,
        (xdrproc_t) xdr_guestfs_zfile_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfile", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ZFILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfile", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zfile", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "zfile", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "zfile",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.description; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "zfile");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_xattr_list *
guestfs_getxattrs (guestfs_h *g,
                   const char *path)
{
  struct guestfs_getxattrs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_getxattrs_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_xattr_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "getxattrs", 9);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "getxattrs", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "getxattrs");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "getxattrs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattrs", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_GETXATTRS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_getxattrs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattrs", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "getxattrs", &hdr, &err,
        (xdrproc_t) xdr_guestfs_getxattrs_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattrs", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_GETXATTRS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattrs", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "getxattrs", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "getxattrs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "getxattrs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.xattrs, sizeof (ret.xattrs));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "getxattrs");
    fprintf (trace_buffer.fp, "<struct guestfs_xattr_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_setxattr (guestfs_h *g,
                  const char *xattr,
                  const char *val,
                  int vallen,
                  const char *path)
{
  struct guestfs_setxattr_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "setxattr", 8);
  if (xattr == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "setxattr", "xattr");
    return -1;
  }
  if (val == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "setxattr", "val");
    return -1;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "setxattr", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "setxattr");
    fprintf (trace_buffer.fp, " \"%s\"", xattr);
    fprintf (trace_buffer.fp, " \"%s\"", val);
    fprintf (trace_buffer.fp, " %d", vallen);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "setxattr") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "setxattr", "-1");
    return -1;
  }

  args.xattr = (char *) xattr;
  args.val = (char *) val;
  args.vallen = vallen;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_SETXATTR,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_setxattr_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "setxattr", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "setxattr", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "setxattr", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SETXATTR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "setxattr", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "setxattr", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "setxattr", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "setxattr",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "setxattr");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_removexattr (guestfs_h *g,
                     const char *xattr,
                     const char *path)
{
  struct guestfs_removexattr_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "removexattr", 11);
  if (xattr == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "removexattr", "xattr");
    return -1;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "removexattr", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "removexattr");
    fprintf (trace_buffer.fp, " \"%s\"", xattr);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "removexattr") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "removexattr", "-1");
    return -1;
  }

  args.xattr = (char *) xattr;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_REMOVEXATTR,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_removexattr_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "removexattr", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "removexattr", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "removexattr", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_REMOVEXATTR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "removexattr", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "removexattr", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "removexattr", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "removexattr",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "removexattr");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_grepi (guestfs_h *g,
               const char *regex,
               const char *path)
{
  struct guestfs_grepi_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_grepi_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "grepi", 5);
  if (regex == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "grepi", "regex");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "grepi", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "grepi");
    fprintf (trace_buffer.fp, " \"%s\"", regex);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "grepi") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "grepi", "NULL");
    return NULL;
  }

  args.regex = (char *) regex;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_GREPI,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_grepi_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "grepi", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "grepi", &hdr, &err,
        (xdrproc_t) xdr_guestfs_grepi_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "grepi", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_GREPI, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "grepi", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "grepi", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "grepi", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "grepi",
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
    fprintf (trace_buffer.fp, "%s = ", "grepi");
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
guestfs_zegrepi (guestfs_h *g,
                 const char *regex,
                 const char *path)
{
  struct guestfs_zegrepi_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_zegrepi_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "zegrepi", 7);
  if (regex == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zegrepi", "regex");
    return NULL;
  }
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "zegrepi", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "zegrepi");
    fprintf (trace_buffer.fp, " \"%s\"", regex);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "zegrepi") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrepi", "NULL");
    return NULL;
  }

  args.regex = (char *) regex;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_ZEGREPI,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_zegrepi_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrepi", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "zegrepi", &hdr, &err,
        (xdrproc_t) xdr_guestfs_zegrepi_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrepi", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_ZEGREPI, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrepi", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "zegrepi", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "zegrepi", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "zegrepi",
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
    fprintf (trace_buffer.fp, "%s = ", "zegrepi");
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
guestfs_ln (guestfs_h *g,
            const char *target,
            const char *linkname)
{
  struct guestfs_ln_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ln", 2);
  if (target == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ln", "target");
    return -1;
  }
  if (linkname == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ln", "linkname");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ln");
    fprintf (trace_buffer.fp, " \"%s\"", target);
    fprintf (trace_buffer.fp, " \"%s\"", linkname);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ln") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln", "-1");
    return -1;
  }

  args.target = (char *) target;
  args.linkname = (char *) linkname;
  serial = guestfs_int_send (g, GUESTFS_PROC_LN,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ln_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ln", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ln", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ln",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ln");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ln_f (guestfs_h *g,
              const char *target,
              const char *linkname)
{
  struct guestfs_ln_f_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ln_f", 4);
  if (target == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ln_f", "target");
    return -1;
  }
  if (linkname == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ln_f", "linkname");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ln_f");
    fprintf (trace_buffer.fp, " \"%s\"", target);
    fprintf (trace_buffer.fp, " \"%s\"", linkname);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ln_f") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_f", "-1");
    return -1;
  }

  args.target = (char *) target;
  args.linkname = (char *) linkname;
  serial = guestfs_int_send (g, GUESTFS_PROC_LN_F,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ln_f_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_f", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ln_f", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_f", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LN_F, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_f", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ln_f", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ln_f", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ln_f",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ln_f");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_fallocate (guestfs_h *g,
                   const char *path,
                   int len)
{
  struct guestfs_fallocate_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "fallocate", 9);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "fallocate", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "fallocate");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " %d", len);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "fallocate") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fallocate", "-1");
    return -1;
  }

  args.path = (char *) path;
  args.len = len;
  serial = guestfs_int_send (g, GUESTFS_PROC_FALLOCATE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_fallocate_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fallocate", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "fallocate", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fallocate", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_FALLOCATE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fallocate", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "fallocate", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "fallocate", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "fallocate",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "fallocate");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_swapoff_label (guestfs_h *g,
                       const char *label)
{
  struct guestfs_swapoff_label_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "swapoff_label", 13);
  if (label == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "swapoff_label", "label");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "swapoff_label");
    fprintf (trace_buffer.fp, " \"%s\"", label);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "swapoff_label") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_label", "-1");
    return -1;
  }

  args.label = (char *) label;
  serial = guestfs_int_send (g, GUESTFS_PROC_SWAPOFF_LABEL,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_swapoff_label_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_label", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "swapoff_label", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_label", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_SWAPOFF_LABEL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_label", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "swapoff_label", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "swapoff_label", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "swapoff_label",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "swapoff_label");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int64_t
guestfs_inotify_add_watch (guestfs_h *g,
                           const char *path,
                           int mask)
{
  struct guestfs_inotify_add_watch_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_inotify_add_watch_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inotify_add_watch", 17);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "inotify_add_watch", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inotify_add_watch");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " %d", mask);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "inotify_add_watch") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_add_watch", "-1");
    return -1;
  }

  args.path = (char *) path;
  args.mask = mask;
  serial = guestfs_int_send (g, GUESTFS_PROC_INOTIFY_ADD_WATCH,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_inotify_add_watch_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_add_watch", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "inotify_add_watch", &hdr, &err,
        (xdrproc_t) xdr_guestfs_inotify_add_watch_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_add_watch", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INOTIFY_ADD_WATCH, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_add_watch", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_add_watch", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "inotify_add_watch", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "inotify_add_watch",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.wd;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "inotify_add_watch");
    fprintf (trace_buffer.fp, "%" PRIi64, ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_inotify_files (guestfs_h *g)
{
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_inotify_files_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "inotify_files", 13);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "inotify_files");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "inotify_files") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_files", "NULL");
    return NULL;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_INOTIFY_FILES, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_files", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "inotify_files", &hdr, &err,
        (xdrproc_t) xdr_guestfs_inotify_files_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_files", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INOTIFY_FILES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_files", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "inotify_files", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "inotify_files", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "inotify_files",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this, but we need to add a NULL entry */
  ret.paths.paths_val =
    safe_realloc (g, ret.paths.paths_val,
                  sizeof (char *) * (ret.paths.paths_len + 1));
  ret.paths.paths_val[ret.paths.paths_len] = NULL;
  ret_v = ret.paths.paths_val;
  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "inotify_files");
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
guestfs_case_sensitive_path (guestfs_h *g,
                             const char *path)
{
  struct guestfs_case_sensitive_path_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_case_sensitive_path_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "case_sensitive_path", 19);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "case_sensitive_path", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "case_sensitive_path");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "case_sensitive_path") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "case_sensitive_path", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_CASE_SENSITIVE_PATH,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_case_sensitive_path_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "case_sensitive_path", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "case_sensitive_path", &hdr, &err,
        (xdrproc_t) xdr_guestfs_case_sensitive_path_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "case_sensitive_path", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CASE_SENSITIVE_PATH, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "case_sensitive_path", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "case_sensitive_path", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "case_sensitive_path", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "case_sensitive_path",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  ret_v = ret.rpath; /* caller will free */
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "case_sensitive_path");
    fprintf (trace_buffer.fp, "\"%s\"", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_truncate (guestfs_h *g,
                  const char *path)
{
  struct guestfs_truncate_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "truncate", 8);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "truncate", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "truncate");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "truncate") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate", "-1");
    return -1;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_TRUNCATE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_truncate_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "truncate", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TRUNCATE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "truncate", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "truncate",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "truncate");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_truncate_size (guestfs_h *g,
                       const char *path,
                       int64_t size)
{
  struct guestfs_truncate_size_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "truncate_size", 13);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "truncate_size", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "truncate_size");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " %" PRIi64, size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "truncate_size") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate_size", "-1");
    return -1;
  }

  args.path = (char *) path;
  args.size = size;
  serial = guestfs_int_send (g, GUESTFS_PROC_TRUNCATE_SIZE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_truncate_size_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate_size", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "truncate_size", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate_size", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TRUNCATE_SIZE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate_size", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "truncate_size", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "truncate_size", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "truncate_size",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "truncate_size");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_utimens (guestfs_h *g,
                 const char *path,
                 int64_t atsecs,
                 int64_t atnsecs,
                 int64_t mtsecs,
                 int64_t mtnsecs)
{
  struct guestfs_utimens_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "utimens", 7);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "utimens", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "utimens");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " %" PRIi64, atsecs);
    fprintf (trace_buffer.fp, " %" PRIi64, atnsecs);
    fprintf (trace_buffer.fp, " %" PRIi64, mtsecs);
    fprintf (trace_buffer.fp, " %" PRIi64, mtnsecs);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "utimens") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "utimens", "-1");
    return -1;
  }

  args.path = (char *) path;
  args.atsecs = atsecs;
  args.atnsecs = atnsecs;
  args.mtsecs = mtsecs;
  args.mtnsecs = mtnsecs;
  serial = guestfs_int_send (g, GUESTFS_PROC_UTIMENS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_utimens_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "utimens", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "utimens", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "utimens", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_UTIMENS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "utimens", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "utimens", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "utimens", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "utimens",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "utimens");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkdir_mode (guestfs_h *g,
                    const char *path,
                    int mode)
{
  struct guestfs_mkdir_mode_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkdir_mode", 10);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkdir_mode", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkdir_mode");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    fprintf (trace_buffer.fp, " %d", mode);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkdir_mode") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_mode", "-1");
    return -1;
  }

  args.path = (char *) path;
  args.mode = mode;
  serial = guestfs_int_send (g, GUESTFS_PROC_MKDIR_MODE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_mkdir_mode_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_mode", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkdir_mode", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_mode", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKDIR_MODE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_mode", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkdir_mode", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkdir_mode", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkdir_mode",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkdir_mode");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lchown (guestfs_h *g,
                int owner,
                int group,
                const char *path)
{
  struct guestfs_lchown_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "lchown", 6);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "lchown", "path");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lchown");
    fprintf (trace_buffer.fp, " %d", owner);
    fprintf (trace_buffer.fp, " %d", group);
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lchown") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lchown", "-1");
    return -1;
  }

  args.owner = owner;
  args.group = group;
  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_LCHOWN,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_lchown_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lchown", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lchown", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lchown", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LCHOWN, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lchown", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lchown", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lchown", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lchown",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lchown");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_part_set_name (guestfs_h *g,
                       const char *device,
                       int partnum,
                       const char *name)
{
  struct guestfs_part_set_name_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "part_set_name", 13);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_set_name", "device");
    return -1;
  }
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "part_set_name", "name");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "part_set_name");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %d", partnum);
    fprintf (trace_buffer.fp, " \"%s\"", name);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "part_set_name") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_name", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.partnum = partnum;
  args.name = (char *) name;
  serial = guestfs_int_send (g, GUESTFS_PROC_PART_SET_NAME,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_part_set_name_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_name", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "part_set_name", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_name", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PART_SET_NAME, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_name", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "part_set_name", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "part_set_name", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "part_set_name",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "part_set_name");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_aug_clear (guestfs_h *g,
                   const char *augpath)
{
  struct guestfs_aug_clear_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "aug_clear", 9);
  if (augpath == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "aug_clear", "augpath");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "aug_clear");
    fprintf (trace_buffer.fp, " \"%s\"", augpath);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "aug_clear") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_clear", "-1");
    return -1;
  }

  args.augpath = (char *) augpath;
  serial = guestfs_int_send (g, GUESTFS_PROC_AUG_CLEAR,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_aug_clear_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_clear", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "aug_clear", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_clear", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_AUG_CLEAR, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_clear", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "aug_clear", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "aug_clear", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "aug_clear",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "aug_clear");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_checksums_out (guestfs_h *g,
                       const char *csumtype,
                       const char *directory,
                       const char *sumsfile)
{
  struct guestfs_checksums_out_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "checksums_out", 13);
  if (csumtype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "checksums_out", "csumtype");
    return -1;
  }
  if (directory == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "checksums_out", "directory");
    return -1;
  }
  if (sumsfile == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "checksums_out", "sumsfile");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "checksums_out");
    fprintf (trace_buffer.fp, " \"%s\"", csumtype);
    fprintf (trace_buffer.fp, " \"%s\"", directory);
    fprintf (trace_buffer.fp, " \"%s\"", sumsfile);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "checksums_out") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksums_out", "-1");
    return -1;
  }

  args.csumtype = (char *) csumtype;
  args.directory = (char *) directory;
  serial = guestfs_int_send (g, GUESTFS_PROC_CHECKSUMS_OUT,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_checksums_out_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksums_out", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "checksums_out", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksums_out", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_CHECKSUMS_OUT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksums_out", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksums_out", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "checksums_out", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "checksums_out",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  if (guestfs_int_recv_file (g, sumsfile) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "checksums_out", "-1");
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "checksums_out");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_pvresize_size (guestfs_h *g,
                       const char *device,
                       int64_t size)
{
  struct guestfs_pvresize_size_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "pvresize_size", 13);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "pvresize_size", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "pvresize_size");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " %" PRIi64, size);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "pvresize_size") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize_size", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.size = size;
  serial = guestfs_int_send (g, GUESTFS_PROC_PVRESIZE_SIZE,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_pvresize_size_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize_size", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "pvresize_size", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize_size", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_PVRESIZE_SIZE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize_size", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "pvresize_size", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "pvresize_size", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "pvresize_size",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "pvresize_size");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_lvm_clear_filter (guestfs_h *g)
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
                                    "lvm_clear_filter", 16);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "lvm_clear_filter");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "lvm_clear_filter") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_clear_filter", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LVM_CLEAR_FILTER, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_clear_filter", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "lvm_clear_filter", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_clear_filter", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LVM_CLEAR_FILTER, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_clear_filter", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "lvm_clear_filter", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "lvm_clear_filter", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "lvm_clear_filter",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "lvm_clear_filter");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_luks_format_cipher (guestfs_h *g,
                            const char *device,
                            const char *key,
                            int keyslot,
                            const char *cipher)
{
  struct guestfs_luks_format_cipher_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "luks_format_cipher", 18);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "luks_format_cipher", "device");
    return -1;
  }
  if (key == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "luks_format_cipher", "key");
    return -1;
  }
  if (cipher == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "luks_format_cipher", "cipher");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "luks_format_cipher");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    fprintf (trace_buffer.fp, " \"***\"");
    fprintf (trace_buffer.fp, " %d", keyslot);
    fprintf (trace_buffer.fp, " \"%s\"", cipher);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "luks_format_cipher") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format_cipher", "-1");
    return -1;
  }

  args.device = (char *) device;
  args.key = (char *) key;
  args.keyslot = keyslot;
  args.cipher = (char *) cipher;
  serial = guestfs_int_send (g, GUESTFS_PROC_LUKS_FORMAT_CIPHER,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_luks_format_cipher_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format_cipher", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "luks_format_cipher", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format_cipher", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LUKS_FORMAT_CIPHER, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format_cipher", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "luks_format_cipher", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "luks_format_cipher", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "luks_format_cipher",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "luks_format_cipher");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_lv (guestfs_h *g,
               const char *device)
{
  struct guestfs_is_lv_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_lv_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_lv", 5);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_lv", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_lv");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_lv") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_lv", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_LV,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_is_lv_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_lv", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_lv", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_lv_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_lv", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_LV, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_lv", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_lv", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_lv", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_lv",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.lvflag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_lv");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_is_blockdev_opts_argv (guestfs_h *g,
                               const char *path,
                               const struct guestfs_is_blockdev_opts_argv *optargs)
{
  struct guestfs_is_blockdev_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_is_blockdev_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_is_blockdev_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "is_blockdev", 11);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "is_blockdev_opts", "path");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "is_blockdev_opts", "is_blockdev_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "is_blockdev");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    if (optargs->bitmask & GUESTFS_IS_BLOCKDEV_OPTS_FOLLOWSYMLINKS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "followsymlinks", optargs->followsymlinks ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "is_blockdev") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_blockdev", "-1");
    return -1;
  }

  args.path = (char *) path;
  if (optargs->bitmask & GUESTFS_IS_BLOCKDEV_OPTS_FOLLOWSYMLINKS_BITMASK) {
    args.followsymlinks = optargs->followsymlinks;
  } else {
    args.followsymlinks = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_IS_BLOCKDEV,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_is_blockdev_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_blockdev", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "is_blockdev", &hdr, &err,
        (xdrproc_t) xdr_guestfs_is_blockdev_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_blockdev", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_IS_BLOCKDEV, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_blockdev", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "is_blockdev", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "is_blockdev", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "is_blockdev",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.flag;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "is_blockdev");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_mkfs_opts_argv (guestfs_h *g,
                        const char *fstype,
                        const char *device,
                        const struct guestfs_mkfs_opts_argv *optargs)
{
  struct guestfs_mkfs_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_mkfs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "mkfs", 4);
  if (fstype == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkfs_opts", "fstype");
    return -1;
  }
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "mkfs_opts", "device");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKFS_OPTS_FEATURES_BITMASK) &&
      optargs->features == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mkfs_opts", "features");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MKFS_OPTS_LABEL_BITMASK) &&
      optargs->label == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "mkfs_opts", "label");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffffe0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "mkfs_opts", "mkfs_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "mkfs");
    fprintf (trace_buffer.fp, " \"%s\"", fstype);
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_MKFS_OPTS_BLOCKSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "blocksize", optargs->blocksize);
    }
    if (optargs->bitmask & GUESTFS_MKFS_OPTS_FEATURES_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "features", optargs->features);
    }
    if (optargs->bitmask & GUESTFS_MKFS_OPTS_INODE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "inode", optargs->inode);
    }
    if (optargs->bitmask & GUESTFS_MKFS_OPTS_SECTORSIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "sectorsize", optargs->sectorsize);
    }
    if (optargs->bitmask & GUESTFS_MKFS_OPTS_LABEL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "label", optargs->label);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "mkfs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs", "-1");
    return -1;
  }

  args.fstype = (char *) fstype;
  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_MKFS_OPTS_BLOCKSIZE_BITMASK) {
    args.blocksize = optargs->blocksize;
  } else {
    args.blocksize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKFS_OPTS_FEATURES_BITMASK) {
    args.features = (char *) optargs->features;
  } else {
    args.features = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_MKFS_OPTS_INODE_BITMASK) {
    args.inode = optargs->inode;
  } else {
    args.inode = 0;
  }
  if (optargs->bitmask & GUESTFS_MKFS_OPTS_SECTORSIZE_BITMASK) {
    args.sectorsize = optargs->sectorsize;
  } else {
    args.sectorsize = 0;
  }
  if (optargs->bitmask & GUESTFS_MKFS_OPTS_LABEL_BITMASK) {
    args.label = (char *) optargs->label;
  } else {
    args.label = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_MKFS,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_mkfs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "mkfs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MKFS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "mkfs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "mkfs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "mkfs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "mkfs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_copy_device_to_file_argv (guestfs_h *g,
                                  const char *src,
                                  const char *dest,
                                  const struct guestfs_copy_device_to_file_argv *optargs)
{
  struct guestfs_copy_device_to_file_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_copy_device_to_file_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "copy_device_to_file", 19);
  if (src == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_device_to_file", "src");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "copy_device_to_file", "dest");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffffe0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "copy_device_to_file", "copy_device_to_file");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "copy_device_to_file");
    fprintf (trace_buffer.fp, " \"%s\"", src);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_SRCOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "srcoffset", optargs->srcoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_DESTOFFSET_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "destoffset", optargs->destoffset);
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_SIZE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "size", optargs->size);
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_SPARSE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "sparse", optargs->sparse ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_APPEND_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "append", optargs->append ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "copy_device_to_file") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_file", "-1");
    return -1;
  }

  args.src = (char *) src;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_SRCOFFSET_BITMASK) {
    args.srcoffset = optargs->srcoffset;
  } else {
    args.srcoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_DESTOFFSET_BITMASK) {
    args.destoffset = optargs->destoffset;
  } else {
    args.destoffset = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_SIZE_BITMASK) {
    args.size = optargs->size;
  } else {
    args.size = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_SPARSE_BITMASK) {
    args.sparse = optargs->sparse;
  } else {
    args.sparse = 0;
  }
  if (optargs->bitmask & GUESTFS_COPY_DEVICE_TO_FILE_APPEND_BITMASK) {
    args.append = optargs->append;
  } else {
    args.append = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_COPY_DEVICE_TO_FILE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_copy_device_to_file_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_file", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "copy_device_to_file", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_file", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_COPY_DEVICE_TO_FILE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_file", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "copy_device_to_file", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "copy_device_to_file", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "copy_device_to_file",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "copy_device_to_file");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_tune2fs_argv (guestfs_h *g,
                      const char *device,
                      const struct guestfs_tune2fs_argv *optargs)
{
  struct guestfs_tune2fs_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_tune2fs_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "tune2fs", 7);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "tune2fs", "device");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_TUNE2FS_ERRORBEHAVIOR_BITMASK) &&
      optargs->errorbehavior == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "tune2fs", "errorbehavior");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_TUNE2FS_LASTMOUNTEDDIRECTORY_BITMASK) &&
      optargs->lastmounteddirectory == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "tune2fs", "lastmounteddirectory");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffc00)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "tune2fs", "tune2fs");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "tune2fs");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_TUNE2FS_FORCE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "force", optargs->force ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_MAXMOUNTCOUNT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "maxmountcount", optargs->maxmountcount);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_MOUNTCOUNT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "mountcount", optargs->mountcount);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_ERRORBEHAVIOR_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "errorbehavior", optargs->errorbehavior);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_GROUP_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "group", optargs->group);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_INTERVALBETWEENCHECKS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "intervalbetweenchecks", optargs->intervalbetweenchecks);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "reservedblockspercentage", optargs->reservedblockspercentage);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_LASTMOUNTEDDIRECTORY_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "lastmounteddirectory", optargs->lastmounteddirectory);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_RESERVEDBLOCKSCOUNT_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "reservedblockscount", optargs->reservedblockscount);
    }
    if (optargs->bitmask & GUESTFS_TUNE2FS_USER_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "user", optargs->user);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "tune2fs") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_TUNE2FS_FORCE_BITMASK) {
    args.force = optargs->force;
  } else {
    args.force = 0;
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_MAXMOUNTCOUNT_BITMASK) {
    args.maxmountcount = optargs->maxmountcount;
  } else {
    args.maxmountcount = 0;
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_MOUNTCOUNT_BITMASK) {
    args.mountcount = optargs->mountcount;
  } else {
    args.mountcount = 0;
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_ERRORBEHAVIOR_BITMASK) {
    args.errorbehavior = (char *) optargs->errorbehavior;
  } else {
    args.errorbehavior = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_GROUP_BITMASK) {
    args.group = optargs->group;
  } else {
    args.group = 0;
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_INTERVALBETWEENCHECKS_BITMASK) {
    args.intervalbetweenchecks = optargs->intervalbetweenchecks;
  } else {
    args.intervalbetweenchecks = 0;
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK) {
    args.reservedblockspercentage = optargs->reservedblockspercentage;
  } else {
    args.reservedblockspercentage = 0;
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_LASTMOUNTEDDIRECTORY_BITMASK) {
    args.lastmounteddirectory = (char *) optargs->lastmounteddirectory;
  } else {
    args.lastmounteddirectory = (char *) "";
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_RESERVEDBLOCKSCOUNT_BITMASK) {
    args.reservedblockscount = optargs->reservedblockscount;
  } else {
    args.reservedblockscount = 0;
  }
  if (optargs->bitmask & GUESTFS_TUNE2FS_USER_BITMASK) {
    args.user = optargs->user;
  } else {
    args.user = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_TUNE2FS,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_tune2fs_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "tune2fs", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_TUNE2FS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "tune2fs", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "tune2fs", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "tune2fs",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "tune2fs");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_md_create_argv (guestfs_h *g,
                        const char *name,
                        char *const *devices,
                        const struct guestfs_md_create_argv *optargs)
{
  struct guestfs_md_create_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_md_create_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "md_create", 9);
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "md_create", "name");
    return -1;
  }
  if (devices == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "md_create", "devices");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_MD_CREATE_LEVEL_BITMASK) &&
      optargs->level == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "md_create", "level");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xffffffffffffffe0)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "md_create", "md_create");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "md_create");
    fprintf (trace_buffer.fp, " \"%s\"", name);
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; devices[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (devices[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    if (optargs->bitmask & GUESTFS_MD_CREATE_MISSINGBITMAP_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "missingbitmap", optargs->missingbitmap);
    }
    if (optargs->bitmask & GUESTFS_MD_CREATE_NRDEVICES_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "nrdevices", optargs->nrdevices);
    }
    if (optargs->bitmask & GUESTFS_MD_CREATE_SPARE_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "spare", optargs->spare);
    }
    if (optargs->bitmask & GUESTFS_MD_CREATE_CHUNK_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%" PRIi64 "\"", "chunk", optargs->chunk);
    }
    if (optargs->bitmask & GUESTFS_MD_CREATE_LEVEL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "level", optargs->level);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "md_create") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_create", "-1");
    return -1;
  }

  args.name = (char *) name;
  args.devices.devices_val = (char **) devices;
  for (args.devices.devices_len = 0; devices[args.devices.devices_len]; args.devices.devices_len++) ;
  if (optargs->bitmask & GUESTFS_MD_CREATE_MISSINGBITMAP_BITMASK) {
    args.missingbitmap = optargs->missingbitmap;
  } else {
    args.missingbitmap = 0;
  }
  if (optargs->bitmask & GUESTFS_MD_CREATE_NRDEVICES_BITMASK) {
    args.nrdevices = optargs->nrdevices;
  } else {
    args.nrdevices = 0;
  }
  if (optargs->bitmask & GUESTFS_MD_CREATE_SPARE_BITMASK) {
    args.spare = optargs->spare;
  } else {
    args.spare = 0;
  }
  if (optargs->bitmask & GUESTFS_MD_CREATE_CHUNK_BITMASK) {
    args.chunk = optargs->chunk;
  } else {
    args.chunk = 0;
  }
  if (optargs->bitmask & GUESTFS_MD_CREATE_LEVEL_BITMASK) {
    args.level = (char *) optargs->level;
  } else {
    args.level = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_MD_CREATE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_md_create_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_create", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "md_create", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_create", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_MD_CREATE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_create", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "md_create", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "md_create", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "md_create",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "md_create");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ntfsfix_argv (guestfs_h *g,
                      const char *device,
                      const struct guestfs_ntfsfix_argv *optargs)
{
  struct guestfs_ntfsfix_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_ntfsfix_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ntfsfix", 7);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ntfsfix", "device");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "ntfsfix", "ntfsfix");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ntfsfix");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    if (optargs->bitmask & GUESTFS_NTFSFIX_CLEARBADSECTORS_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "clearbadsectors", optargs->clearbadsectors ? "true" : "false");
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ntfsfix") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsfix", "-1");
    return -1;
  }

  args.device = (char *) device;
  if (optargs->bitmask & GUESTFS_NTFSFIX_CLEARBADSECTORS_BITMASK) {
    args.clearbadsectors = optargs->clearbadsectors;
  } else {
    args.clearbadsectors = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_NTFSFIX,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_ntfsfix_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsfix", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ntfsfix", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsfix", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_NTFSFIX, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsfix", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ntfsfix", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ntfsfix", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ntfsfix",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ntfsfix");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char *
guestfs_vgmeta (guestfs_h *g,
                const char *vgname,
                size_t *size_r)
{
  struct guestfs_vgmeta_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_vgmeta_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "vgmeta", 6);
  if (vgname == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vgmeta", "vgname");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vgmeta");
    fprintf (trace_buffer.fp, " \"%s\"", vgname);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vgmeta") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgmeta", "NULL");
    return NULL;
  }

  args.vgname = (char *) vgname;
  serial = guestfs_int_send (g, GUESTFS_PROC_VGMETA,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_vgmeta_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgmeta", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "vgmeta", &hdr, &err,
        (xdrproc_t) xdr_guestfs_vgmeta_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgmeta", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VGMETA, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgmeta", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgmeta", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vgmeta", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vgmeta",
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
  if (ret.metadata.metadata_len > 0) {
    *size_r = ret.metadata.metadata_len;
    ret_v = ret.metadata.metadata_val; /* caller will free */
  } else {
    free (ret.metadata.metadata_val);
    char *p = safe_malloc (g, 1);
    *size_r = ret.metadata.metadata_len;
    ret_v = p;
  }
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vgmeta");
    guestfs_int_print_BufferOut (trace_buffer.fp, ret_v, *size_r);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_subvolume_snapshot_opts_argv (guestfs_h *g,
                                            const char *source,
                                            const char *dest,
                                            const struct guestfs_btrfs_subvolume_snapshot_opts_argv *optargs)
{
  struct guestfs_btrfs_subvolume_snapshot_opts_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_btrfs_subvolume_snapshot_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_subvolume_snapshot", 24);
  if (source == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_subvolume_snapshot_opts", "source");
    return -1;
  }
  if (dest == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_subvolume_snapshot_opts", "dest");
    return -1;
  }
  if ((optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_QGROUPID_BITMASK) &&
      optargs->qgroupid == NULL) {
    error (g, "%s: %s: optional parameter cannot be NULL",
           "btrfs_subvolume_snapshot_opts", "qgroupid");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffc)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "btrfs_subvolume_snapshot_opts", "btrfs_subvolume_snapshot_opts");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_subvolume_snapshot");
    fprintf (trace_buffer.fp, " \"%s\"", source);
    fprintf (trace_buffer.fp, " \"%s\"", dest);
    if (optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_RO_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "ro", optargs->ro ? "true" : "false");
    }
    if (optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_QGROUPID_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%s\"", "qgroupid", optargs->qgroupid);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_subvolume_snapshot") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_snapshot", "-1");
    return -1;
  }

  args.source = (char *) source;
  args.dest = (char *) dest;
  if (optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_RO_BITMASK) {
    args.ro = optargs->ro;
  } else {
    args.ro = 0;
  }
  if (optargs->bitmask & GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_QGROUPID_BITMASK) {
    args.qgroupid = (char *) optargs->qgroupid;
  } else {
    args.qgroupid = (char *) "";
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_SUBVOLUME_SNAPSHOT,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_btrfs_subvolume_snapshot_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_snapshot", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_subvolume_snapshot", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_snapshot", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_SUBVOLUME_SNAPSHOT, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_snapshot", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_subvolume_snapshot", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_subvolume_snapshot", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_subvolume_snapshot",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_subvolume_snapshot");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_vgchange_uuid (guestfs_h *g,
                       const char *vg)
{
  struct guestfs_vgchange_uuid_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "vgchange_uuid", 13);
  if (vg == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "vgchange_uuid", "vg");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vgchange_uuid");
    fprintf (trace_buffer.fp, " \"%s\"", vg);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vgchange_uuid") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid", "-1");
    return -1;
  }

  args.vg = (char *) vg;
  serial = guestfs_int_send (g, GUESTFS_PROC_VGCHANGE_UUID,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_vgchange_uuid_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "vgchange_uuid", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VGCHANGE_UUID, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vgchange_uuid", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vgchange_uuid",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vgchange_uuid");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_vgchange_uuid_all (guestfs_h *g)
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
                                    "vgchange_uuid_all", 17);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "vgchange_uuid_all");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "vgchange_uuid_all") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid_all", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_VGCHANGE_UUID_ALL, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid_all", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "vgchange_uuid_all", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid_all", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_VGCHANGE_UUID_ALL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid_all", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "vgchange_uuid_all", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "vgchange_uuid_all", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "vgchange_uuid_all",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "vgchange_uuid_all");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int64_t
guestfs_hivex_node_add_child (guestfs_h *g,
                              int64_t parent,
                              const char *name)
{
  struct guestfs_hivex_node_add_child_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_hivex_node_add_child_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "hivex_node_add_child", 20);
  if (name == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "hivex_node_add_child", "name");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "hivex_node_add_child");
    fprintf (trace_buffer.fp, " %" PRIi64, parent);
    fprintf (trace_buffer.fp, " \"%s\"", name);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "hivex_node_add_child") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_add_child", "-1");
    return -1;
  }

  args.parent = parent;
  args.name = (char *) name;
  serial = guestfs_int_send (g, GUESTFS_PROC_HIVEX_NODE_ADD_CHILD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_hivex_node_add_child_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_add_child", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "hivex_node_add_child", &hdr, &err,
        (xdrproc_t) xdr_guestfs_hivex_node_add_child_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_add_child", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_HIVEX_NODE_ADD_CHILD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_add_child", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_add_child", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "hivex_node_add_child", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "hivex_node_add_child",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.nodeh;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "hivex_node_add_child");
    fprintf (trace_buffer.fp, "%" PRIi64, ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_hivex_node_delete_child (guestfs_h *g,
                                 int64_t nodeh)
{
  struct guestfs_hivex_node_delete_child_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "hivex_node_delete_child", 23);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "hivex_node_delete_child");
    fprintf (trace_buffer.fp, " %" PRIi64, nodeh);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "hivex_node_delete_child") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_delete_child", "-1");
    return -1;
  }

  args.nodeh = nodeh;
  serial = guestfs_int_send (g, GUESTFS_PROC_HIVEX_NODE_DELETE_CHILD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_hivex_node_delete_child_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_delete_child", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "hivex_node_delete_child", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_delete_child", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_HIVEX_NODE_DELETE_CHILD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_delete_child", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "hivex_node_delete_child", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "hivex_node_delete_child", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "hivex_node_delete_child",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "hivex_node_delete_child");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_ldmtool_create_all (guestfs_h *g)
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
                                    "ldmtool_create_all", 18);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ldmtool_create_all");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ldmtool_create_all") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_create_all", "-1");
    return -1;
  }

  serial = guestfs_int_send (g, GUESTFS_PROC_LDMTOOL_CREATE_ALL, progress_hint, 0,
                             NULL, NULL);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_create_all", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "ldmtool_create_all", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_create_all", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LDMTOOL_CREATE_ALL, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_create_all", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_create_all", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ldmtool_create_all", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ldmtool_create_all",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "ldmtool_create_all");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC char **
guestfs_ldmtool_volume_partitions (guestfs_h *g,
                                   const char *diskgroup,
                                   const char *volume)
{
  struct guestfs_ldmtool_volume_partitions_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_ldmtool_volume_partitions_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  char **ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "ldmtool_volume_partitions", 25);
  if (diskgroup == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_volume_partitions", "diskgroup");
    return NULL;
  }
  if (volume == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "ldmtool_volume_partitions", "volume");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "ldmtool_volume_partitions");
    fprintf (trace_buffer.fp, " \"%s\"", diskgroup);
    fprintf (trace_buffer.fp, " \"%s\"", volume);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "ldmtool_volume_partitions") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_partitions", "NULL");
    return NULL;
  }

  args.diskgroup = (char *) diskgroup;
  args.volume = (char *) volume;
  serial = guestfs_int_send (g, GUESTFS_PROC_LDMTOOL_VOLUME_PARTITIONS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_ldmtool_volume_partitions_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_partitions", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "ldmtool_volume_partitions", &hdr, &err,
        (xdrproc_t) xdr_guestfs_ldmtool_volume_partitions_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_partitions", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_LDMTOOL_VOLUME_PARTITIONS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_partitions", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "ldmtool_volume_partitions", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "ldmtool_volume_partitions", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "ldmtool_volume_partitions",
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
    fprintf (trace_buffer.fp, "%s = ", "ldmtool_volume_partitions");
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

GUESTFS_DLL_PUBLIC int64_t
guestfs_journal_skip (guestfs_h *g,
                      int64_t skip)
{
  struct guestfs_journal_skip_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_journal_skip_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int64_t ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "journal_skip", 12);
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "journal_skip");
    fprintf (trace_buffer.fp, " %" PRIi64, skip);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "journal_skip") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_skip", "-1");
    return -1;
  }

  args.skip = skip;
  serial = guestfs_int_send (g, GUESTFS_PROC_JOURNAL_SKIP,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_journal_skip_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_skip", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "journal_skip", &hdr, &err,
        (xdrproc_t) xdr_guestfs_journal_skip_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_skip", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_JOURNAL_SKIP, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_skip", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "journal_skip", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "journal_skip", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "journal_skip",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.rskip;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "journal_skip");
    fprintf (trace_buffer.fp, "%" PRIi64, ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_internal_upload (guestfs_h *g,
                         const char *filename,
                         const char *tmpname,
                         int mode)
{
  struct guestfs_internal_upload_args args;
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
                                    "internal_upload", 15);
  if (filename == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_upload", "filename");
    return -1;
  }
  if (tmpname == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "internal_upload", "tmpname");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "internal_upload");
    fprintf (trace_buffer.fp, " \"%s\"", filename);
    fprintf (trace_buffer.fp, " \"%s\"", tmpname);
    fprintf (trace_buffer.fp, " %d", mode);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (stat (filename, &progress_stat) == 0 &&
      S_ISREG (progress_stat.st_mode))
    progress_hint += progress_stat.st_size;

  if (guestfs_int_check_appliance_up (g, "internal_upload") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_upload", "-1");
    return -1;
  }

  args.tmpname = (char *) tmpname;
  args.mode = mode;
  serial = guestfs_int_send (g, GUESTFS_PROC_INTERNAL_UPLOAD,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_internal_upload_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_upload", "-1");
    return -1;
  }

  r = guestfs_int_send_file (g, filename);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_upload", "-1");
    /* daemon will send an error reply which we discard */
    guestfs_int_recv_discard (g, "internal_upload");
    return -1;
  }
  if (r == -2) /* daemon cancelled */
    goto read_reply;

 read_reply:
  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "internal_upload", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_upload", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_INTERNAL_UPLOAD, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_upload", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "internal_upload", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "internal_upload", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "internal_upload",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "internal_upload");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_blkdiscardzeroes (guestfs_h *g,
                          const char *device)
{
  struct guestfs_blkdiscardzeroes_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_blkdiscardzeroes_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "blkdiscardzeroes", 16);
  if (device == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "blkdiscardzeroes", "device");
    return -1;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "blkdiscardzeroes");
    fprintf (trace_buffer.fp, " \"%s\"", device);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "blkdiscardzeroes") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkdiscardzeroes", "-1");
    return -1;
  }

  args.device = (char *) device;
  serial = guestfs_int_send (g, GUESTFS_PROC_BLKDISCARDZEROES,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_blkdiscardzeroes_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkdiscardzeroes", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "blkdiscardzeroes", &hdr, &err,
        (xdrproc_t) xdr_guestfs_blkdiscardzeroes_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkdiscardzeroes", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BLKDISCARDZEROES, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkdiscardzeroes", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "blkdiscardzeroes", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "blkdiscardzeroes", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "blkdiscardzeroes",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = ret.zeroes;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "blkdiscardzeroes");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_statns *
guestfs_statns (guestfs_h *g,
                const char *path)
{
  struct guestfs_statns_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_statns_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_statns *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "statns", 6);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "statns", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "statns");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "statns") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statns", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_STATNS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_statns_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statns", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "statns", &hdr, &err,
        (xdrproc_t) xdr_guestfs_statns_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statns", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_STATNS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statns", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "statns", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "statns", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "statns",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.statbuf, sizeof (ret.statbuf));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "statns");
    fprintf (trace_buffer.fp, "<struct guestfs_statns *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_btrfsqgroup_list *
guestfs_btrfs_qgroup_show (guestfs_h *g,
                           const char *path)
{
  struct guestfs_btrfs_qgroup_show_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_btrfs_qgroup_show_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_btrfsqgroup_list *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_qgroup_show", 17);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_qgroup_show", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_qgroup_show");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_qgroup_show") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_qgroup_show", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_QGROUP_SHOW,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_qgroup_show_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_qgroup_show", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "btrfs_qgroup_show", &hdr, &err,
        (xdrproc_t) xdr_guestfs_btrfs_qgroup_show_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_qgroup_show", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_QGROUP_SHOW, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_qgroup_show", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_qgroup_show", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_qgroup_show", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_qgroup_show",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.qgroups, sizeof (ret.qgroups));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_qgroup_show");
    fprintf (trace_buffer.fp, "<struct guestfs_btrfsqgroup_list *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC struct guestfs_btrfsbalance *
guestfs_btrfs_balance_status (guestfs_h *g,
                              const char *path)
{
  struct guestfs_btrfs_balance_status_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  struct guestfs_btrfs_balance_status_ret ret;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  struct guestfs_btrfsbalance *ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_balance_status", 20);
  if (path == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_balance_status", "path");
    return NULL;
  }

  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_balance_status");
    fprintf (trace_buffer.fp, " \"%s\"", path);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_balance_status") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_status", "NULL");
    return NULL;
  }

  args.path = (char *) path;
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_BALANCE_STATUS,
                             progress_hint, 0,
                             (xdrproc_t) xdr_guestfs_btrfs_balance_status_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_status", "NULL");
    return NULL;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);
  memset (&ret, 0, sizeof ret);

  r = guestfs_int_recv (g, "btrfs_balance_status", &hdr, &err,
        (xdrproc_t) xdr_guestfs_btrfs_balance_status_ret, (char *) &ret);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_status", "NULL");
    return NULL;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_BALANCE_STATUS, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_status", "NULL");
    return NULL;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_balance_status", "NULL");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_balance_status", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_balance_status",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return NULL;
  }

  /* caller will free this */
  ret_v = safe_memdup (g, &ret.status, sizeof (ret.status));
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_balance_status");
    fprintf (trace_buffer.fp, "<struct guestfs_btrfsbalance *>");
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

GUESTFS_DLL_PUBLIC int
guestfs_btrfs_image_argv (guestfs_h *g,
                          char *const *source,
                          const char *image,
                          const struct guestfs_btrfs_image_argv *optargs)
{
  struct guestfs_btrfs_image_argv optargs_null;
  if (!optargs) {
    optargs_null.bitmask = 0;
    optargs = &optargs_null;
  }

  struct guestfs_btrfs_image_args args;
  guestfs_message_header hdr;
  guestfs_message_error err;
  int serial;
  int r;
  int trace_flag = g->trace;
  struct trace_buffer trace_buffer;
  int ret_v;
  const uint64_t progress_hint = 0;

  guestfs_int_call_callbacks_message (g, GUESTFS_EVENT_ENTER,
                                    "btrfs_image", 11);
  if (source == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_image", "source");
    return -1;
  }
  if (image == NULL) {
    error (g, "%s: %s: parameter cannot be NULL",
           "btrfs_image", "image");
    return -1;
  }

  if (optargs->bitmask & UINT64_C(0xfffffffffffffffe)) {
    error (g, "%s: unknown option in guestfs_%s_argv->bitmask (this can happen if a program is compiled against a newer version of libguestfs, then dynamically linked to an older version)",
           "btrfs_image", "btrfs_image");
    return -1;
  }

  if (trace_flag) {
    size_t i;

    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s", "btrfs_image");
    fputc (' ', trace_buffer.fp);
    fputc ('"', trace_buffer.fp);
    for (i = 0; source[i]; ++i) {
      if (i > 0) fputc (' ', trace_buffer.fp);
      fputs (source[i], trace_buffer.fp);
    }
    fputc ('"', trace_buffer.fp);
    fprintf (trace_buffer.fp, " \"%s\"", image);
    if (optargs->bitmask & GUESTFS_BTRFS_IMAGE_COMPRESSLEVEL_BITMASK) {
      fprintf (trace_buffer.fp, " \"%s:%d\"", "compresslevel", optargs->compresslevel);
    }
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  if (guestfs_int_check_appliance_up (g, "btrfs_image") == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_image", "-1");
    return -1;
  }

  args.source.source_val = (char **) source;
  for (args.source.source_len = 0; source[args.source.source_len]; args.source.source_len++) ;
  args.image = (char *) image;
  if (optargs->bitmask & GUESTFS_BTRFS_IMAGE_COMPRESSLEVEL_BITMASK) {
    args.compresslevel = optargs->compresslevel;
  } else {
    args.compresslevel = 0;
  }
  serial = guestfs_int_send (g, GUESTFS_PROC_BTRFS_IMAGE,
                             progress_hint, optargs->bitmask,
                             (xdrproc_t) xdr_guestfs_btrfs_image_args, (char *) &args);
  if (serial == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_image", "-1");
    return -1;
  }

  memset (&hdr, 0, sizeof hdr);
  memset (&err, 0, sizeof err);

  r = guestfs_int_recv (g, "btrfs_image", &hdr, &err,
        NULL, NULL);
  if (r == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_image", "-1");
    return -1;
  }

  if (guestfs_int_check_reply_header (g, &hdr, GUESTFS_PROC_BTRFS_IMAGE, serial) == -1) {
    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_image", "-1");
    return -1;
  }

  if (hdr.status == GUESTFS_STATUS_ERROR) {
    int errnum = 0;

    if (trace_flag)
      guestfs_int_trace (g, "%s = %s (error)",
                         "btrfs_image", "-1");
    if (err.errno_string[0] != '\0')
      errnum = guestfs_int_string_to_errno (err.errno_string);
    if (errnum <= 0)
      error (g, "%s: %s", "btrfs_image", err.error_message);
    else
      guestfs_int_error_errno (g, errnum, "%s: %s", "btrfs_image",
                               err.error_message);
    free (err.error_message);
    free (err.errno_string);
    return -1;
  }

  ret_v = 0;
  if (trace_flag) {
    guestfs_int_trace_open (&trace_buffer);
    fprintf (trace_buffer.fp, "%s = ", "btrfs_image");
    fprintf (trace_buffer.fp, "%d", ret_v);
    guestfs_int_trace_send_line (g, &trace_buffer);
  }

  return ret_v;
}

