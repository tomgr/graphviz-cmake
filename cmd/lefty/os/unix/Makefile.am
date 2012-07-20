# $Id: Makefile.am,v 1.5 2009/06/03 01:10:48 ellson Exp $ $Revision: 1.5 $
## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = -I$(top_srcdir)/cmd/lefty

if WITH_X
noinst_LTLIBRARIES = libos.la
endif

libos_la_SOURCES = io.c

EXTRA_DIST = $(libos_la_SOURCES)
