# $Id: Makefile.am,v 1.3 2009/06/03 01:10:58 ellson Exp $ $Revision: 1.3 $
## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = @TCL_CFLAGS@ @TCL_INCLUDES@

LIBS = @TCL_STUB_LIB_SPEC@

if WITH_TCL
noinst_LTLIBRARIES = libtclstubs_C.la
noinst_HEADERS = tclInt.h
endif

# tclStubLib.c is a dummy file just to fool automake
libtclstubs_C_la_SOURCES = tclStubLib.c

EXTRA_DIST = Makefile.old
