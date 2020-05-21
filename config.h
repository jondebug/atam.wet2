/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Enable support for comics. */
#define ENABLE_COMICS 1

/* Define if DBUS support is enabled */
/* #undef ENABLE_DBUS */

/* Enable djvu viewer support. */
#define ENABLE_DJVU 1

/* Enable dvi viewer support. */
#define ENABLE_DVI 1

/* Whether multimedia support is enabled */
#define ENABLE_MULTIMEDIA 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Enable support for PostScript files. */
/* #undef ENABLE_PS */

/* Enable multipage tiff support. */
#define ENABLE_TIFF 1

/* Enable support for XPS documents. */
#define ENABLE_XPS 1

/* Minimum GTK/GDK version required */
#define GDK_VERSION_MIN_REQUIRED GDK_VERSION_3_8

/* Gettext package */
#define GETTEXT_PACKAGE "evince"

/* Define if gtk+-unix-print is enabled. */
#define GTKUNIXPRINT_ENABLED 1

/* defined if cairo-pdf is available */
#define HAVE_CAIRO_PDF 1

/* defined if cairo-ps is available */
#define HAVE_CAIRO_PS 1

/* Define to 1 if you have the `cairo_surface_set_device_scale' function. */
#define HAVE_CAIRO_SURFACE_SET_DEVICE_SCALE 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Whether GSettings Desktop Schemas are available */
#define HAVE_DESKTOP_SCHEMAS 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if cairo and GTK+ have necessary functions for hi-dpi */
#define HAVE_HIDPI_SUPPORT 1

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Whether GNOME Desktop (Thumbnail cache) is available */
#define HAVE_LIBGNOME_DESKTOP 1

/* Defines if localtime_r is available on your system */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* defined if you build the nautilus plugin */
/* #undef HAVE_NAUTILUS */

/* Have libspectre */
#define HAVE_SPECTRE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <tiff.h> header file. */
#define HAVE_TIFF_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define if _NL_MEASUREMENT_MEASUREMENT is available */
#define HAVE__NL_MEASUREMENT_MEASUREMENT 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "evince"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=evince"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Evince"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Evince 3.36.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "evince"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.36.0"

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "3.36.0"

/* Define if GSPELL support is enabled */
/* #undef WITH_GSPELL */

/* Define if KEYRING support is enabled */
#define WITH_KEYRING 1

/* Enable t1lib support in dvi. */
/* #undef WITH_TYPE1_FONTS */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
