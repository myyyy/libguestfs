/* virt-v2v
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
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#include <caml/alloc.h>
#include <caml/fail.h>
#include <caml/memory.h>
#include <caml/mlvalues.h>

#include "guestfs.h"
#include "guestfs-internal-frontend.h"

#pragma GCC diagnostic ignored "-Wmissing-prototypes"

value
v2v_utils_drive_name (value indexv)
{
  CAMLparam1 (indexv);
  CAMLlocal1 (namev);
  char name[64];

  guestfs_int_drive_name (Int_val (indexv), name);
  namev = caml_copy_string (name);

  CAMLreturn (namev);
}

value
v2v_utils_drive_index (value strv)
{
  CAMLparam1 (strv);
  ssize_t r;

  r = guestfs_int_drive_index (String_val (strv));
  if (r == -1)
    caml_invalid_argument ("drive_index: invalid parameter");

  CAMLreturn (Val_int (r));
}

value
v2v_utils_trim (value origin)
{
  CAMLparam1 (origin);
  CAMLlocal1 (modified_str);
  char result[strlen(String_val (origin))];

  trim(String_val (origin), result);
  modified_str = caml_copy_string (result);

  CAMLreturn (modified_str);
}

void
trim(char* origin, char *result)
{
    int i = 0;
    int len = strlen(origin);
    int j = len - 1;
    int pos = 0;

    while (origin[i] != '\0' && isspace(origin[i]))
    {
        ++i;
    }
    while (origin[j] != '\0' && isspace(origin[j]))
    {
        --j;
    }
    while (i <= j)
    {
        result[pos++] = origin[i++];
    }
}
