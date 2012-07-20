/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Command to open a browser on a URL */
#define BROWSER "open"

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define for any Darwin-based OS. */
#define DARWIN 1

/* Define for Darwin-style shared library names. */
#define DARWIN_DYLIB ""

/* Default DPI. */
#define DEFAULT_DPI 96

/* Path to TrueType fonts. */
#define DEFAULT_FONTPATH "~/Library/Fonts:/Library/Fonts:/Network/Library/Fonts:/System/Library/Fonts"

/* Define if you want DIGCOLA */
#define DIGCOLA 1

/* Define if you want on-demand plugin loading */
/* #undef ENABLE_LTDL */

/* Define for DLLs on Windows. */
/* #undef GVDLL */

/* Filename for plugin configuration file. */
#define GVPLUGIN_CONFIG_FILE "config6"

/* Compatibility version number for plugins. */
#define GVPLUGIN_VERSION 6

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `argz_add' function. */
/* #undef HAVE_ARGZ_ADD */

/* Define to 1 if you have the `argz_append' function. */
/* #undef HAVE_ARGZ_APPEND */

/* Define to 1 if you have the `argz_count' function. */
/* #undef HAVE_ARGZ_COUNT */

/* Define to 1 if you have the `argz_create_sep' function. */
/* #undef HAVE_ARGZ_CREATE_SEP */

/* Define to 1 if you have the <argz.h> header file. */
/* #undef HAVE_ARGZ_H */

/* Define to 1 if you have the `argz_insert' function. */
/* #undef HAVE_ARGZ_INSERT */

/* Define to 1 if you have the `argz_next' function. */
/* #undef HAVE_ARGZ_NEXT */

/* Define to 1 if you have the `argz_stringify' function. */
/* #undef HAVE_ARGZ_STRINGIFY */

/* Define to 1 if compiler supports bool */
/* #undef HAVE_BOOL */

/* Define to 1 if you have the `cbrt' function. */
#define HAVE_CBRT 1

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the <crt_externs.h> header file. */
#define HAVE_CRT_EXTERNS_H 1

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the `deflateBound' function. */
#define HAVE_DEFLATEBOUND 1

/* Define if you have the DevIL library */
/* #undef HAVE_DEVIL */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define to 1 if you have the `drand48' function. */
#define HAVE_DRAND48 1

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define if errno externs are declared */
#define HAVE_ERRNO_DECL 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if the system has the type `error_t'. */
/* #undef HAVE_ERROR_T */

/* Define if you have the expat library */
/* #undef HAVE_EXPAT */

/* Define to 1 if you have the <expat.h> header file. */
/* #undef HAVE_EXPAT_H */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `feenableexcept' function. */
/* #undef HAVE_FEENABLEEXCEPT */

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define to 1 if you have the `fesetenv' function. */
#define HAVE_FESETENV 1

/* Define if FILE structure provides _cnt */
/* #undef HAVE_FILE_CNT */

/* Define if FILE structure provides _IO_read_end */
/* #undef HAVE_FILE_IO_READ_END */

/* Define if FILE structure provides _next */
/* #undef HAVE_FILE_NEXT */

/* Define if FILE structure provides _r */
#define HAVE_FILE_R 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define if you have the fontconfig library */
/* #undef HAVE_FONTCONFIG */

/* Define to 1 if you have the <fpu_control.h> header file. */
/* #undef HAVE_FPU_CONTROL_H */

/* Define if you have the freetype2 library */
/* #undef HAVE_FREETYPE2 */

/* Define if you have the GDI+ framework for Windows */
/* #undef HAVE_GDIPLUS */

/* Define if you have the gdk_pixbuf library */
#define HAVE_GDK_PIXBUF 1

/* Define if the GD library has the GD_FONTCONFIG feature */
/* #undef HAVE_GD_FONTCONFIG */

/* Define if the GD library has the GD_FREETYPE feature */
/* #undef HAVE_GD_FREETYPE */

/* Define if the GD library has the GD_GIF feature */
/* #undef HAVE_GD_GIF */

/* Define if the GD library supports GIFANIM */
/* #undef HAVE_GD_GIFANIM */

/* Define if the GD library has the GD_JPEG feature */
/* #undef HAVE_GD_JPEG */

/* Define if the GD library supports OPENPOLYGON */
/* #undef HAVE_GD_OPENPOLYGON */

/* Define if the GD library has the GD_PNG feature */
#define HAVE_GD_PNG 1

/* Define if the GD library supports XPM */
/* #undef HAVE_GD_XPM */

/* Define to 1 if you have the `getenv' function. */
#define HAVE_GETENV 1

/* Define if getopt externs are declared */
#define HAVE_GETOPT_DECL 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define if you have the glade library */
#define HAVE_GLADE 1

/* Define if you have the glitz library */
/* #undef HAVE_GLITZ */

/* Define if you have the GLUT library */
/* #undef HAVE_GLUT */

/* Define if you have the gs library */
/* #undef HAVE_GS */

/* Define if you have the gtk library */
#define HAVE_GTK 1

/* Define if you have the gtkgl library */
/* #undef HAVE_GTKGL */

/* Define if you have the gtkglext library */
#define HAVE_GTKGLEXT 1

/* Define if you have the gts library */
/* #undef HAVE_GTS */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <iconv.h> header file. */
/* #undef HAVE_ICONV_H */

/* Define if <iconv.h> defines iconv_t. */
/* #undef HAVE_ICONV_T_DEF */

/* Define to 1 if you have the <IL/il.h> header file. */
/* #undef HAVE_IL_IL_H */

/* Define if intptr_t is declared */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if you have the lasi library */
/* #undef HAVE_LASI */

/* Define if you have the libdl library or equivalent. */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define if either internal or external GD library is availabel */
/* #undef HAVE_LIBGD */

/* Define if the LIBGEN library has the basename feature */
/* #undef HAVE_LIBGEN */

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* Define if you have the JPEG library */
/* #undef HAVE_LIBJPEG */

/* Define to 1 if you have the `ltdl' library (-lltdl). */
/* #undef HAVE_LIBLTDL */

/* Define if you have the PNG library */
#define HAVE_LIBPNG 1

/* Define if you have the XPM library */
/* #undef HAVE_LIBXPMFORLEFTY */

/* Define if you have the Z library */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `lrand48' function. */
#define HAVE_LRAND48 1

/* Define to 1 if you have the `lsqrt' function. */
/* #undef HAVE_LSQRT */

/* Define this if a modern libltdl is already installed */
#define HAVE_LTDL 1

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#define HAVE_MACH_O_DYLD_H 1

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define if you have the ming library for SWF support */
/* #undef HAVE_MING */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define if you have the pangocairo library */
#define HAVE_PANGOCAIRO 1

/* Define to 1 if you have the `pango_fc_font_lock_face' function. */
#define HAVE_PANGO_FC_FONT_LOCK_FACE 1

/* Define to 1 if you have the `pango_fc_font_unlock_face' function. */
#define HAVE_PANGO_FC_FONT_UNLOCK_FACE 1

/* Define to 1 if you have the `pow' function. */
#define HAVE_POW 1

/* Define if libtool can extract symbol lists from object files. */
#define HAVE_PRELOADED_SYMBOLS 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define if you have the Quartz framework for Mac OS X */
#define HAVE_QUARTZ 1

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define if you have the rsvg library */
/* #undef HAVE_RSVG */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the <setjmp.h> header file. */
#define HAVE_SETJMP_H 1

/* Define to 1 if you have the `setmode' function. */
#define HAVE_SETMODE 1

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define if libm provides a *working* sincos function */
/* #undef HAVE_SINCOS */

/* Define to 1 if you have the `sqrt' function. */
#define HAVE_SQRT 1

/* Define to 1 if you have the `srand48' function. */
#define HAVE_SRAND48 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if stdbool.h conforms to C99. */
/* #undef HAVE_STDBOOL_H */

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if you have struct dioattr */
/* #undef HAVE_STRUCT_DIOATTR */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/fpu.h> header file. */
/* #undef HAVE_SYS_FPU_H */

/* Define to 1 if you have the <sys/inotify.h> header file. */
/* #undef HAVE_SYS_INOTIFY_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if you have the tcl library */
/* #undef HAVE_TCL */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <tkInt.h> header file. */
/* #undef HAVE_TKINT_H */

/* Define to 1 if you have the <tk.h> header file. */
/* #undef HAVE_TK_H */

/* Define if triangle.[ch] are available. */
/* #undef HAVE_TRIANGLE */

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <values.h> header file. */
/* #undef HAVE_VALUES_H */

/* Define if you have the visio library */
/* #undef HAVE_VISIO */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* This value is set to 1 to indicate that the system argz facility works */
/* #undef HAVE_WORKING_ARGZ */

/* Define to 1 if you have the <X11/Intrinsic.h> header file. */
#define HAVE_X11_INTRINSIC_H 1

/* Define to 1 if you have the <X11/Xaw/Text.h> header file. */
#define HAVE_X11_XAW_TEXT_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_NSGetEnviron' function. */
#define HAVE__NSGETENVIRON 1

/* Define to 1 if you have the `_sysconf' function. */
/* #undef HAVE__SYSCONF */

/* Define to 1 if you have the `__freadable' function. */
/* #undef HAVE___FREADABLE */

/* Define as const if the declaration of iconv() needs const. */
/* #undef ICONV_CONST */

/* Define if you want IPSEPCOLA */
#define IPSEPCOLA 1

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
#define LT_DLSEARCH_PATH "/usr/local/lib:/lib:/usr/lib"

/* The archive extension */
#define LT_LIBEXT "a"

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".so"

/* Define to the name of the environment variable that determines the run-time
   module search path. */
#define LT_MODULE_PATH_VAR "DYLD_LIBRARY_PATH"

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Define if no fpu error exception handling is required. */
/* #undef NO_FPERR */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Postscript fontnames. */
#define NO_POSTSCRIPT_ALIAS 1

/* Define if you want ORTHO */
#define ORTHO 1

/* Name of package */
#define PACKAGE "graphviz"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://www.graphviz.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "graphviz"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "graphviz 2.28.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "graphviz"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.28.0"

/* Path separator character. */
#define PATHSEPARATOR ":"

/* Define if you want SFDP */
#define SFDP 1

/* Define if you want SMYRNA */
/* #undef SMYRNA */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "2.28.0"

/* Define if you want CGRAPH */
/* #undef WITH_CGRAPH */

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
#define __error_t_defined 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to a type to use for `error_t' if it is not otherwise available. */
#define error_t int

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to unsigned if socklet_t is missing */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
