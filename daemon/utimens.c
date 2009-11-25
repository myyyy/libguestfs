/* libguestfs - the guestfsd daemon
 * Copyright (C) 2009 Red Hat Inc.
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#include "../src/guestfs_protocol.h"
#include "daemon.h"
#include "actions.h"

int
do_utimens (const char *path,
            int64_t atsecs, int64_t atnsecs,
            int64_t mtsecs, int64_t mtnsecs)
{
  int fd;
  int r;

  CHROOT_IN;
  fd = open (path, O_WRONLY | O_NOCTTY);
  CHROOT_OUT;

  if (fd == -1) {
    reply_with_perror ("open: %s", path);
    return -1;
  }

  if (atnsecs == -1)
    atnsecs = UTIME_NOW;
  if (atnsecs == -2)
    atnsecs = UTIME_OMIT;
  if (mtnsecs == -1)
    mtnsecs = UTIME_NOW;
  if (mtnsecs == -2)
    mtnsecs = UTIME_OMIT;

  struct timespec times[2];
  times[0].tv_sec = atsecs;
  times[0].tv_nsec = atnsecs;
  times[1].tv_sec = mtsecs;
  times[1].tv_nsec = mtnsecs;

  r = futimens (fd, times);
  if (r == -1) {
    reply_with_perror ("futimens: %s", path);
    close (fd);
    return -1;
  }

  if (close (fd) == -1) {
    reply_with_perror ("close: %s", path);
    return -1;
  }

  return 0;
}
