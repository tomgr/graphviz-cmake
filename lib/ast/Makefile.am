# $Id: Makefile.am,v 1.7 2009/06/03 01:10:51 ellson Exp $ $Revision: 1.7 $
## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = -I$(top_srcdir)/lib/sfio

noinst_HEADERS = align.h ast.h error.h hashkey.h
noinst_LTLIBRARIES = libast_C.la

libast_C_la_SOURCES = pathpath.c sfstr.h chresc.c chrtoi.c error.c \
	fmtbuf.c fmtesc.c pathaccess.c pathbin.c pathcanon.c pathcat.c \
	pathexists.c pathfind.c pathgetlink.c \
	strcopy.c stresc.c strmatch.c strton.c strerror.c

EXTRA_DIST = Makefile.old compat_unistd.h ast.vcproj
