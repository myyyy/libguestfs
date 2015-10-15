# libguestfs Perl bindings
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

use Config;
use ExtUtils::MakeMaker;

WriteMakefile (
    FIRST_MAKEFILE => 'Makefile-pl',

    NAME => 'Sys::Guestfs',
    VERSION => '0.456',

    LIBS => '-L../src/.libs -lguestfs',
    INC => '-I../src -I../src',
    TYPEMAPS => [ './typemap' ],
    CCFLAGS => $Config{ccflags} . ' -DGUESTFS_PRIVATE=1 -g -O2 -fno-strict-overflow -Wno-strict-overflow',
    );
