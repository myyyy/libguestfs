# libguestfs Python bindings -*- python -*-
# python/setup.py.  Generated from setup.py.in by configure.
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

from distutils.core import setup, Extension

setup (name='guestfs',
       version='1.30.3',

       description='access and modify virtual machine disk images',
       long_description="""
libguestfs is a library and set of tools for accessing and modifying
virtual machine (VM) disk images.

This package contains the Python bindings for libguestfs.
""",

       author='The libguestfs team',
       author_email='libguestfs@redhat.com',
       url='http://libguestfs.org',

       license='LGPLv2+',

       classifiers=[
           'Development Status :: 5 - Production/Stable',
           'Environment :: Console',
           'Intended Audience :: Developers',
           'License :: OSI Approved :: GNU Lesser General Public License v2 or later (LGPLv2+)',
           'Operating System :: POSIX :: Linux',
           'Programming Language :: C',
           'Programming Language :: Python :: 2',
           'Programming Language :: Python :: 3',
           'Programming Language :: Python :: Implementation :: CPython',
           'Topic :: Utilities',
       ],

       py_modules=['guestfs'],
       ext_modules=[
           Extension (
               'libguestfsmod',
               ['guestfs-py-byhand.c', 'guestfs-py.c', 'utils.c'],

               include_dirs=['.', '../src'],
               libraries=['guestfs'],
               define_macros=[('GUESTFS_PRIVATE', '1')],
           )
       ]
   )
