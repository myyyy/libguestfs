# libguestfs virt-v2v tool
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

include $(top_srcdir)/subdir-rules.mk

EXTRA_DIST = \
	$(SOURCES_MLI) $(SOURCES_ML) $(SOURCES_C) \
	v2v_unit_tests.ml \
	$(TESTS) $(SLOW_TESTS) \
	$(FAKE_VIRT_TOOLS) \
	$(FAKE_VIRTIO_WIN) \
	HACKING \
	test-v2v-cdrom.expected \
	test-v2v-cdrom.xml \
	test-v2v-i-ova.ovf \
	test-v2v-i-ova.xml \
	test-v2v-i-ova-formats.expected \
	test-v2v-i-ova-formats.ovf \
	test-v2v-i-ova-gz.expected \
	test-v2v-i-ova-gz.ovf \
	test-v2v-i-ova-two-disks.expected \
	test-v2v-i-ova-two-disks.ovf \
	test-v2v-networks-and-bridges-expected.xml \
	test-v2v-networks-and-bridges.xml \
	test-v2v-sound.xml \
	virt-v2v.pod

CLEANFILES = *~ *.annot *.cmi *.cmo *.cmx *.cmxa *.o virt-v2v

SOURCES_MLI = \
	convert_linux.mli \
	convert_windows.mli \
	curl.mli \
	detect_antivirus.ml \
	detect_antivirus.mli \
	DOM.mli \
	domainxml.mli \
	input_disk.mli \
	input_libvirt.mli \
	input_libvirt_other.mli \
	input_libvirt_vcenter_https.mli \
	input_libvirt_xen_ssh.mli \
	input_libvirtxml.mli \
	input_ova.mli \
	kvmuid.mli \
	linux.mli \
	modules_list.mli \
	output_glance.mli \
	output_libvirt.mli \
	output_local.mli \
	output_null.mli \
	output_qemu.mli \
	output_rhev.mli \
	output_vdsm.mli \
	OVF.mli \
	stringMap.mli \
	types.mli \
	vCenter.mli \
	xml.mli

SOURCES_ML = \
	stringMap.ml \
	types.ml \
	xml.ml \
	utils.ml \
	curl.ml \
	vCenter.ml \
	domainxml.ml \
	DOM.ml \
	kvmuid.ml \
	OVF.ml \
	linux.ml \
	detect_antivirus.ml \
	modules_list.ml \
	input_disk.ml \
	input_libvirtxml.ml \
	input_libvirt_other.ml \
	input_libvirt_vcenter_https.ml \
	input_libvirt_xen_ssh.ml \
	input_libvirt.ml \
	input_ova.ml \
	convert_linux.ml \
	convert_windows.ml \
	output_null.ml \
	output_glance.ml \
	output_libvirt.ml \
	output_local.ml \
	output_qemu.ml \
	output_rhev.ml \
	output_vdsm.ml \
	cmdline.ml \
	v2v.ml

SOURCES_C = \
	../mllib/mkdtemp-c.c \
	domainxml-c.c \
	kvmuid-c.c \
	utils-c.c \
	xml-c.c

fake_virt_tools_dir = fake-virt-tools
FAKE_VIRT_TOOLS = \
	$(fake_virt_tools_dir)/rhsrvany.exe \
	$(fake_virt_tools_dir)/rhev-apt.exe

fake_virtio_win_dir = fake-virtio-win
FAKE_VIRTIO_WIN = $(wildcard $(fake_virtio_win_dir)/*/*/*/*)

fake_virtio_win_iso = fake-virtio-win.iso
check_DATA = $(fake_virtio_win_iso)
CLEANFILES += $(fake_virtio_win_iso)

$(fake_virtio_win_iso): $(FAKE_VIRTIO_WIN)
	$(GENISOIMAGE) -J -r -o $@ $(fake_virtio_win_dir)

if HAVE_OCAML

bin_PROGRAMS = virt-v2v

virt_v2v_SOURCES = $(SOURCES_C)
virt_v2v_CPPFLAGS = \
	-I. \
	-I$(top_builddir) \
	-I$(shell $(OCAMLC) -where) \
	-I$(top_srcdir)/src
virt_v2v_CFLAGS = \
	$(WARN_CFLAGS) $(WERROR_CFLAGS) \
	$(LIBXML2_CFLAGS) \
	$(LIBVIRT_CFLAGS)

BOBJECTS = \
	$(top_builddir)/mllib/config.cmo \
	$(top_builddir)/mllib/common_gettext.cmo \
	$(top_builddir)/mllib/common_utils.cmo \
	$(top_builddir)/mllib/regedit.cmo \
	$(top_builddir)/mllib/mkdtemp.cmo \
	$(top_builddir)/mllib/JSON.cmo \
	$(top_builddir)/customize/customize_utils.cmo \
	$(top_builddir)/customize/firstboot.cmo \
	$(SOURCES_ML:.ml=.cmo)
XOBJECTS = $(BOBJECTS:.cmo=.cmx)

# -I $(top_builddir)/src/.libs is a hack which forces corresponding -L
# option to be passed to gcc, so we don't try linking against an
# installed copy of libguestfs.
OCAMLPACKAGES = \
	-package str,unix \
	-I $(top_builddir)/src/.libs \
	-I $(top_builddir)/gnulib/lib/.libs \
	-I $(top_builddir)/ocaml \
	-I $(top_builddir)/mllib \
	-I $(top_builddir)/customize
if HAVE_OCAML_PKG_GETTEXT
OCAMLPACKAGES += -package gettext-stub
endif

OCAMLCLIBS = \
	-lutils \
	$(LIBVIRT_LIBS) \
	$(LIBXML2_LIBS) \
	$(LIBINTL) \
	-lgnu

OCAMLFLAGS = $(OCAML_FLAGS) $(OCAML_WARN_ERROR)

if !HAVE_OCAMLOPT
OBJECTS = $(BOBJECTS)
BEST    = c
OCAMLLINKFLAGS = mlguestfs.cma -custom
else
OBJECTS = $(XOBJECTS)
BEST    = opt
OCAMLLINKFLAGS = mlguestfs.cmxa
endif

virt_v2v_DEPENDENCIES = $(OBJECTS) $(top_srcdir)/ocaml-link.sh
virt_v2v_LINK = \
	$(top_srcdir)/ocaml-link.sh -cclib '$(OCAMLCLIBS)' -- \
	  $(OCAMLFIND) $(BEST) $(OCAMLFLAGS) $(OCAMLPACKAGES) $(OCAMLLINKFLAGS) \
	  $(OBJECTS) -o $@

.mli.cmi:
	$(OCAMLFIND) ocamlc $(OCAMLFLAGS) $(OCAMLPACKAGES) -c $< -o $@
.ml.cmo:
	$(OCAMLFIND) ocamlc $(OCAMLFLAGS) $(OCAMLPACKAGES) -c $< -o $@
if HAVE_OCAMLOPT
.ml.cmx:
	$(OCAMLFIND) ocamlopt $(OCAMLFLAGS) $(OCAMLPACKAGES) -c $< -o $@
endif

# Data directory.

virttoolsdatadir = $(datadir)/virt-tools

# Manual pages and HTML files for the website.

man_MANS = virt-v2v.1

noinst_DATA = $(top_builddir)/html/virt-v2v.1.html

virt-v2v.1 $(top_builddir)/html/virt-v2v.1.html: stamp-virt-v2v.pod

stamp-virt-v2v.pod: virt-v2v.pod
	$(PODWRAPPER) \
	  --man virt-v2v.1 \
	  --html $(top_builddir)/html/virt-v2v.1.html \
	  --license GPLv2+ \
	  $<
	touch $@

CLEANFILES += stamp-virt-v2v.pod

# Tests.

# The virt-v2v tests here are not meant to be thorough tests of guest
# conversion.  There is a test suite used to test conversion which is
# kept outside libguestfs because it contains lots of proprietary
# unredistributable guests like Windows.
#
# The tests here instead are testing:
#
# - virt-v2v command line arguments
# - virt-v2v reads and writes files to the correct places
# - valgrind & memory leaks
# - any conversion properties that can be tested using just the
#   phony guests (but we don't go out of our way here)
# - that up to date guests don't crash virt-v2v

TESTS_ENVIRONMENT = $(top_builddir)/run --test

TESTS = \
	test-v2v-i-ova-formats.sh \
	test-v2v-i-ova-gz.sh \
	test-v2v-i-ova-two-disks.sh

if HAVE_OCAML_PKG_OUNIT
TESTS += v2v_unit_tests
endif

if ENABLE_APPLIANCE
TESTS += \
	test-v2v-cdrom.sh \
	test-v2v-i-ova.sh \
	test-v2v-i-disk.sh \
	test-v2v-machine-readable.sh \
	test-v2v-networks-and-bridges.sh \
	test-v2v-no-copy.sh \
	test-v2v-o-glance.sh \
	test-v2v-o-libvirt.sh \
	test-v2v-o-null.sh \
	test-v2v-o-qemu.sh \
	test-v2v-o-rhev.sh \
	test-v2v-o-vdsm-options.sh \
	test-v2v-oa-option.sh \
	test-v2v-of-option.sh \
	test-v2v-on-option.sh \
	test-v2v-print-source.sh \
	test-v2v-sound.sh \
	test-v2v-virtio-win-iso.sh \
	test-v2v-windows-conversion.sh
endif ENABLE_APPLIANCE

check-valgrind:
	$(MAKE) VG="$(top_builddir)/run @VG@" check

SLOW_TESTS = \
	test-v2v-real-conversions.sh

check-slow: $(real_guests:%=%.img)
	$(MAKE) check TESTS="$(SLOW_TESTS)"

# A selection of real guests that test-v2v-real-conversions.sh will
# try to convert.  This is only used by 'make check-slow'.

real_guests = \
	centos-6 \
	centos-7.0 \
	fedora-20 \
	rhel-5.10 \
	rhel-6.5 \
	rhel-7.0

$(real_guests:%=%.img):
	rm -f $@
	n=`basename $@ .img`;                                            \
	vb="$(top_builddir)/run $(top_builddir)/builder/virt-builder";   \
	if $$vb --help >/dev/null && $$vb --notes $$n >/dev/null; then   \
	  $$vb $$n;                                                      \
	else                                                             \
	  touch $$n.img;                                                 \
	fi

CLEANFILES += $(real_guests:%=%.img)

# Unit tests.
check_PROGRAMS =
if HAVE_OCAML_PKG_OUNIT
check_PROGRAMS += v2v_unit_tests
endif

v2v_unit_tests_BOBJECTS = \
	$(top_builddir)/mllib/config.cmo \
	$(top_builddir)/mllib/common_gettext.cmo \
	$(top_builddir)/mllib/common_utils.cmo \
	stringMap.cmo \
	types.cmo \
	xml.cmo \
	utils.cmo \
	DOM.cmo \
	OVF.cmo \
	v2v_unit_tests.cmo
v2v_unit_tests_XOBJECTS = $(v2v_unit_tests_BOBJECTS:.cmo=.cmx)

v2v_unit_tests_SOURCES = $(virt_v2v_SOURCES)
v2v_unit_tests_CPPFLAGS = $(virt_v2v_CPPFLAGS)
v2v_unit_tests_CFLAGS = $(virt_v2v_CFLAGS)

if !HAVE_OCAMLOPT
# Can't call this v2v_unit_tests_OBJECTS because automake gets confused.
v2v_unit_tests_THEOBJECTS = $(v2v_unit_tests_BOBJECTS)
v2v_unit_tests.cmo: OCAMLPACKAGES += -package oUnit
else
v2v_unit_tests_THEOBJECTS = $(v2v_unit_tests_XOBJECTS)
v2v_unit_tests.cmx: OCAMLPACKAGES += -package oUnit
endif

v2v_unit_tests_DEPENDENCIES = $(v2v_unit_tests_THEOBJECTS) $(top_srcdir)/ocaml-link.sh
v2v_unit_tests_LINK = \
	$(top_srcdir)/ocaml-link.sh -cclib '$(OCAMLCLIBS)' -- \
	  $(OCAMLFIND) $(BEST) $(OCAMLFLAGS) \
	  $(OCAMLPACKAGES) -package oUnit \
	  $(OCAMLLINKFLAGS) \
	  $(v2v_unit_tests_THEOBJECTS) -o $@

CLEANFILES += oUnit-*

# Dependencies.
depend: .depend

.depend: $(wildcard $(abs_srcdir)/*.mli) $(wildcard $(abs_srcdir)/*.ml)
	rm -f $@ $@-t
	$(OCAMLFIND) ocamldep -I ../ocaml -I $(abs_srcdir) -I $(abs_top_builddir)/mllib -I $(abs_top_builddir)/customize $^ | \
	  $(SED) 's/ *$$//' | \
	  $(SED) -e :a -e '/ *\\$$/N; s/ *\\\n */ /; ta' | \
	  $(SED) -e 's,$(abs_srcdir)/,$(builddir)/,g' | \
	  sort > $@-t
	mv $@-t $@

-include .depend

endif

DISTCLEANFILES = .depend

.PHONY: depend docs
