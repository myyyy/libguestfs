#!/bin/bash
# installcheck.sh.  Generated from installcheck.sh.in by configure.
#
# (C) Copyright 2015 Red Hat Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

# Run 'make check' on installed packages.
#
# The version of installed libguestfs being tested, and the version of
# the libguestfs source tree must be the same.

unset CDPATH
export LANG=C
set -e
set -x

# Grrrrrrr autoconf.
prefix=/usr/local
exec_prefix=${prefix}

# Remove all libtool crappage.
find -name 'lt-*' | grep '/.libs/lt-' | xargs -r rm

# Copy the installed library into libtool directory.
rm src/.libs/libguestfs.so*
cp ${exec_prefix}/lib/libguestfs.so* src/.libs/

# Copy installed binaries into the right places.
cp ${exec_prefix}/bin/libguestfs-test-tool  test-tool/
cp ${exec_prefix}/bin/guestfish             fish/
cp ${exec_prefix}/bin/guestmount            fuse/
cp ${exec_prefix}/bin/virt-alignment-scan   align/
cp ${exec_prefix}/bin/virt-builder          builder/
cp ${exec_prefix}/bin/virt-cat              cat/
cp ${exec_prefix}/bin/virt-copy-in          fish/
cp ${exec_prefix}/bin/virt-copy-out         fish/
cp ${exec_prefix}/bin/virt-customize        customize/
cp ${exec_prefix}/bin/virt-dib              dib/
cp ${exec_prefix}/bin/virt-diff             diff/
cp ${exec_prefix}/bin/virt-df               df/
cp ${exec_prefix}/bin/virt-edit             edit/
cp ${exec_prefix}/bin/virt-filesystems      cat/
cp ${exec_prefix}/bin/virt-format           format/
cp ${exec_prefix}/bin/virt-get-kernel       get-kernel/
cp ${exec_prefix}/bin/virt-inspector        inspector/
cp ${exec_prefix}/bin/virt-ls               cat/
cp ${exec_prefix}/bin/virt-make-fs          make-fs/
cp ${exec_prefix}/libexec/virt-p2v          p2v/
cp ${exec_prefix}/bin/virt-rescue           rescue/
cp ${exec_prefix}/bin/virt-resize           resize/
cp ${exec_prefix}/bin/virt-sparsify         sparsify/
cp ${exec_prefix}/bin/virt-sysprep          sysprep/
cp ${exec_prefix}/bin/virt-tar-in           fish/
cp ${exec_prefix}/bin/virt-tar-out          fish/
cp ${exec_prefix}/bin/virt-v2v              v2v/
cp ${exec_prefix}/bin/virt-win-reg          tools/

# virt-list-filesystems, virt-list-partitions and virt-tar are not
# tested, because they are not routinely installed by Linux distros
# (being legacy programs).

# XXX No language bindings are copied at the moment.

# Copy the installed appliance.
rm -rf appliance/supermin.d
cp -r ${exec_prefix}/lib/guestfs/supermin.d appliance/
# Try to force the appliance not to get rebuilt:
touch appliance/stamp-supermin
rm -rf "tmp/.guestfs-$(id -u)"

# Run the tests.
make check -k

# Check the library and some critical binaries didn't get rebuilt
# during the 'make check', which would invalidate the results of
# the test.
compare () {
    sum1=`md5sum $1 | gawk '{print $1}'`
    sum2=`md5sum $2 | gawk '{print $1}'`
    if [ "$sum1" != "$sum2" ]; then
        echo "$2 was overwritten during the test.  Test results are invalid."
        exit 1
    fi
}
compare ${exec_prefix}/lib/libguestfs.so src/.libs/libguestfs.so
compare ${exec_prefix}/bin/guestfish  fish/guestfish
compare ${exec_prefix}/bin/guestmount fuse/guestmount
compare ${exec_prefix}/bin/virt-df    df/virt-df
compare ${exec_prefix}/bin/virt-v2v   v2v/virt-v2v
compare ${exec_prefix}/lib/guestfs/supermin.d/daemon.tar.gz \
                            appliance/supermin.d/daemon.tar.gz

# Now do a make clean to remove all the above.
make clean >/dev/null 2>&1 ||:
