# $Id: Makefile.am,v 1.6 2009/06/03 01:10:48 ellson Exp $ $Revision: 1.6 $
## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = -I$(top_srcdir)/cmd/lefty 

noinst_HEADERS = gcommon.h resource.h
if WITH_WIN32
noinst_LTLIBRARIES = libws.la
endif

libws_la_SOURCES = garray.c gbutton.c gcanvas.c gcommon.c glabel.c \
	gmenu.c gpcanvas.c gquery.c gscroll.c gtext.c gview.c

EXTRA_DIST = lefty.rc
