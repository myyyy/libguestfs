#!/bin/bash -
# libguestfs virt-v2v test script
# Copyright (C) 2014 Red Hat Inc.
# Copyright (C) 2015 Parallels IP Holdings GmbH.
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
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

# Test virt-v2v Windows conversion with VirtIO drivers on an ISO image.

unset CDPATH
export LANG=C
set -e

if [ -n "$SKIP_TEST_V2V_VIRTIO_WIN_ISO_SH" ]; then
    echo "$0: test skipped because environment variable is set"
    exit 77
fi

if [ "$(guestfish get-backend)" = "uml" ]; then
    echo "$0: test skipped because UML backend does not support network"
    exit 77
fi

abs_top_builddir="$(cd ..; pwd)"
libvirt_uri="test://$abs_top_builddir/tests/guests/guests.xml"

f=../tests/guests/windows.img
if ! test -f $f || ! test -s $f; then
    echo "$0: test skipped because phony Windows image was not created"
    exit 77
fi

export VIRT_TOOLS_DATA_DIR="$PWD/fake-virt-tools"
export VIRTIO_WIN="$PWD/fake-virtio-win.iso"

if ! test -f "$VIRTIO_WIN"; then
    echo "$0: test skipped because fake virtio-win iso image was not created"
    exit 77
fi

# Return a random element from the array 'choices'.
function random_choice
{
    echo "${choices[$((RANDOM % ${#choices[*]}))]}"
}

# Test the --root option stochastically.
choices=("/dev/sda2" "single" "first")
root=`random_choice`

d=test-v2v-virtio-win-iso.d
rm -rf $d
mkdir $d

$VG virt-v2v --debug-gc \
    -i libvirt -ic "$libvirt_uri" windows \
    -o local -os $d \
    --root $root

# Test the libvirt XML metadata and a disk was created.
test -f $d/windows.xml
test -f $d/windows-sda

# Test that the drivers have been copied over into the guest
script="$d/test.fish"
expected="$d/expected"
response="$d/response"

mktest ()
{
    local cmd="$1" exp="$2"

    echo "echo '$cmd'" >> "$script"
    echo "$cmd" >> "$expected"

    echo "$cmd" >> "$script"
    echo "$exp" >> "$expected"
}

:> "$script"
:> "$expected"

firstboot_dir="/Program Files/Red Hat/Firstboot"
mktest "is-dir \"$firstboot_dir\"" true
mktest "is-file \"$firstboot_dir/firstboot.bat\"" true
mktest "is-dir \"$firstboot_dir/scripts\"" true
virtio_dir="/Windows/Drivers/VirtIO"
mktest "is-dir \"$virtio_dir\"" true
for drv in netkvm qxl vioscsi viostor; do
    for sfx in cat inf sys; do
        mktest "is-file \"$virtio_dir/$drv.$sfx\"" true
    done
done

guestfish --ro -a "$d/windows-sda" -i < "$script" > "$response"
diff -u "$expected" "$response"

rm -r $d
