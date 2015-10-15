# libguestfs Ruby bindings -*- ruby -*-
# ruby/ext/guestfs/extconf.rb.  Generated from extconf.rb.in by configure.
# Copyright (C) 2009-2015 Red Hat Inc.
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

require 'mkmf'

extension_name = '_guestfs'

dir_config(extension_name)

unless have_header("guestfs.h")
  raise "<guestfs.h> not found"
end
unless have_library("guestfs", "guestfs_create", "guestfs.h")
  raise "libguestfs not found"
end

have_func("rb_hash_lookup")
have_func("rb_define_alloc_func")
have_type("rb_alloc_func_t")

$CFLAGS =
  "#{$CFLAGS} -g -O2 -fno-strict-overflow -Wno-strict-overflow -DGUESTFS_PRIVATE=1 " <<
  " -W -Wabi -Waddress -Wall -Wattributes -Wbad-function-cast -Wbuiltin-macro-redefined -Wcast-align -Wchar-subscripts -Wclobbered -Wcomment -Wcomments -Wcoverage-mismatch -Wcpp -Wdeprecated -Wdeprecated-declarations -Wdisabled-optimization -Wdiv-by-zero -Wdouble-promotion -Wempty-body -Wendif-labels -Wenum-compare -Wextra -Wformat-contains-nul -Wformat-extra-args -Wformat-nonliteral -Wformat-security -Wformat-y2k -Wformat-zero-length -Wignored-qualifiers -Wimplicit -Wimplicit-function-declaration -Wimplicit-int -Winit-self -Wint-to-pointer-cast -Winvalid-pch -Wjump-misses-init -Wlogical-op -Wmain -Wmissing-braces -Wmissing-declarations -Wmissing-field-initializers -Wmissing-include-dirs -Wmissing-parameter-type -Wmissing-prototypes -Wmultichar -Wnested-externs -Wnonnull -Wold-style-declaration -Wold-style-definition -Woverflow -Woverride-init -Wpacked-bitfield-compat -Wparentheses -Wpointer-arith -Wpointer-sign -Wpointer-to-int-cast -Wpragmas -Wreturn-type -Wsequence-point -Wstack-protector -Wstrict-aliasing -Wstrict-overflow -Wstrict-prototypes -Wsuggest-attribute=noreturn -Wswitch -Wsync-nand -Wtrampolines -Wtrigraphs -Wtype-limits -Wuninitialized -Wunknown-pragmas -Wunused -Wunused-but-set-parameter -Wunused-but-set-variable -Wunused-function -Wunused-label -Wunused-macros -Wunused-parameter -Wunused-result -Wunused-value -Wunused-variable -Wvariadic-macros -Wvolatile-register-var -Wwrite-strings -Wnormalized=nfc -Wno-missing-field-initializers -Wno-unused-parameter -Wno-missing-field-initializers -fdiagnostics-show-option -Wframe-larger-than=10000 "

create_header
create_makefile(extension_name, "/home/franklin/temp/libguestfs/ruby/ext/guestfs")
