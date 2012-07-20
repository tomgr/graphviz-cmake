# $Id: Makefile.am,v 1.3 2009/06/03 01:10:58 ellson Exp $ $Revision: 1.3 $
# Process this file with automake to produce Makefile.in

AM_CPPFLAGS = @TCL_CFLAGS@ @TK_CFLAGS@ @TCL_INCLUDES@  @TK_INCLUDES@ @TK_XINCLUDES@
                                                                                
LIBS = @TK_STUB_LIB_SPEC@

if WITH_TK
noinst_LTLIBRARIES = libtkstubs_C.la
noinst_HEADERS = tkInt.h
endif

# tkStubLib.c is a dummy file just to fool automake
libtkstubs_C_la_SOURCES = tkStubLib.c tkStubImg.c

EXTRA_DIST =
