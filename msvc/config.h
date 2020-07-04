#ifndef CONFIG_H
#define CONFIG_H

/* Eliminate a number of warnings which come up based on deprecated
   POSIX naming conventions. */
#ifdef _MSC_VER

/* Define O_BINARY so that the appropriate flags
are set when opening a binary file on Windows. */

/* Disable a few warnings under Visual Studio, for the
   time being. */
  #include <io.h>
  #pragma warning( disable: 4018 4996 4244 4305 )
  #define unlink _unlink
  #define open _open
  #define close _close
  #define read _read
  #define lseek _lseeki64

  #define fstat _fstat64

  #define off_t __int64
  #define _off_t __int64

  #ifndef _OFF_T_DEFINED
  #define _OFF_T_DEFINED
  #endif

#ifdef _WIN32
	#ifndef strcasecmp
  		#define strcasecmp _stricmp
#if _MSC_VER < 1900
		#define snprintf _snprintf
#endif
  	#endif
#endif


  #define strdup _strdup
  #define fdopen _fdopen
  #define write _write
#if _MSC_VER < 1900
  #define snprintf _snprintf
#endif
  #define strtoll _strtoi64
#endif


/* Cache Size, other variables for HDF5 */
#define DEFAULT_CHUNK_SIZE	4194304
#define DEFAULT_CHUNKS_IN_CACHE	10
#define CHUNK_CACHE_SIZE 	4194304
#define CHUNK_CACHE_NELEMS 	1009
#define CHUNK_CACHE_PREEMPTION 	0.75
#define MAX_DEFAULT_CACHE_SIZE	67108864
#define NCIO_MINBLOCKSIZE	256

#ifndef _FILE_OFFSET_BITS
/* #undef _FILE_OFFSET_BITS */
/* #undef _LARGEFILE64_SOURCE */
/* #undef _LARGEFILE_SOURCE */
#endif

#define PACKAGE_VERSION "4.3.3.1"
#define VERSION "4.3.3.1"
#define NC_VERSION "4.3.3.1"
/* For HDF5 use. */
#define H5_USE_16_API 1

/* Enable Logging, only valid for netcdf 4. */
/* #undef LOGGING */

/* Various other options. */
#define BUILD_V2 1
/* #undef NO_NETCDF_2 */
/* #undef USE_FSYNC */
/* #undef JNA */
/* #undef ENABLE_DOXYGEN */
/* #undef ENABLE_INTERNAL_DOCS */
/* #undef VALGRIND_TESTS */
/* #undef ENABLE_CDMREMOTE */
#define USE_DAP 1
#define ENABLE_DAP 1
#define ENABLE_DAP_GROUPS 1
#define ENABLE_DAP_REMOTE_TESTS 1
/* #undef EXTRA_TESTS */
#define USE_NETCDF4 1
/* #undef USE_LIBDL */
/* #undef USE_HDF4 */
#define USE_HDF5 1
/* #undef USE_FFIO */
/* #undef USE_PARALLEL_POSIX */
/* #undef USE_PARALLEL_MPIO */
/* #undef USE_PARALLEL */
/* #undef USE_PNETCDF */
/* #undef USE_MMAP */
/* #undef TEST_PARALLEL */
/* #undef BUILD_RPC */
#define USE_DISKLESS 1
/* #undef USE_SZIP */
#define USE_ZLIB 1
#define USE_X_GETOPT 1
/* #undef LARGE_FILE_TESTS */
/* #undef HAVE_DECL_ISFINITE */
/* #undef HAVE_DECL_ISNAN */
/* #undef HAVE_CURLOPT_USERNAME */
/* #undef HAVE_CURLOPT_PASSWORD */
/* #undef HAVE_CURLOPT_KEYPASSWD */
/* #undef HAVE_CURLINFO_RESPONSE_CODE */
/* #undef HAVE_CURLOPT_CHUNK_BGN_FUNCTION */
/* #undef HAVE_DECL_SIGNBIT */
/* #undef HAVE_DOPRNT */
/* #undef HAVE_ALLOCA */
/* #undef HAVE_SSIZE_T */
/* #undef HAVE_LIBPNETCDF */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the <alloca.h> header file. */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <dirent> header file. */
/* #undef HAVE_DIRENT_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */
#define YY_NO_UNISTD_H TRUE

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <getopt.h> header file. */
/* #undef HAVE_GETOPT_H */

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <hdf5.h> header file. */
/* #undef HAVE_HDF5_H */

/* Define to 1 if you have the <hdf5_hl.h> header file. */
/* #undef HAVE_HDF5_HL_H */

/* Define to 1 if you have the <stdbool.h> header file. */
#if _MSC_VER > 1700
#define HAVE_STDBOOL_H 1
#endif

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCAL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the <sys/dir.h> header file. */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file. */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#if _MSC_VER > 1700
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the BaseTsd.h header file. */
#define HAVE_BASETSD_H 1

/* Define if we have filelengthi64. */
#define HAVE_FILE_LENGTH_I64 1

/* The size of `void*` as computed by sizeof. */
#define SIZEOF_VOIDSTAR 4
/* The size of `char` as computed by sizeof. */
#define SIZEOF_CHAR 1
/* The size of `double` as computed by sizeof. */
#define SIZEOF_DOUBLE 8
/* The size of `float` as computed by sizeof. */
#define SIZEOF_FLOAT 4
/* The size of `int` as computed by sizeof. */
#define SIZEOF_INT 4
/* The size of `long` as computed by sizeof. */
#define SIZEOF_LONG 4
/* The size of `long long` as computed by sizeof. */
#define SIZEOF_LONG_LONG 8
/* The size of `off_t` as computed by sizeof. */
#define SIZEOF_OFF_T 8
/* The size of `short` as computed by sizeof. */
/* #undef SIZEOF_OFF64_T */
#define SIZEOF_SHORT 2
/* The size of `size_t` as computed by sizeof. */
#define SIZEOF_SIZE_T 4
/* The size of `ssize_t` as computed by sizeof. */
/* #undef SIZEOF_SSIZE_T */
/* The size of `uchar` as computed by sizeof. */
/* #undef SIZEOF_UCHAR */
/* The size of `__int64` found on Windows systems. */
/* #undef SIZEOF___INT64 */



#define TEMP_LARGE "."

/* Set if we have strdup */
#define HAVE_STRDUP
/* #undef HAVE_STRNDUP */
/* #undef HAVE_STRLCAT */
#define HAVE_STRERROR
/* #undef HAVE_SNPRINTF */
#define HAVE_STRCHR
#define HAVE_STRRCHR
#define HAVE_STRCAT
#define HAVE_STRCPY
#define HAVE_STRDUP
/* #undef HAVE_STRCASECMP */
#define HAVE_STRTOD
#define HAVE_STRTOLL
#define HAVE_STROULL
#define HAVE_STRSTR
/* #undef HAVE_MKSTEMP */
#define HAVE_RAND
/* #undef HAVE_GETTIMEOFDAY */
/* #undef HAVE_MPI_COMM_F2C */
#define HAVE_MEMMOVE
/* #undef HAVE_MMAP */
/* #undef HAVE_GETPAGESIZE */
/* #undef HAVE_SYSCONF */
/* #undef HAVE_MREMAP */
/* #undef HAVE_DECL_ISINF */

/* #undef HAVE_GETRLIMIT */
/* #undef HAVE_FSYNC */

/* #undef HAVE_H5PGET_FAPL_MPIPOSIX */
/* #undef HAVE_H5PSET_DEFLATE */
/* #undef HAVE_H5Z_SZIP */


/* Specifies if various libraries are present. */
/* #undef HAVE_LIBM */

/* Define to 1 if the system has the type `uchar'.*/
/* #undef HAVE_UCHAR */

/* Misc defines copied from autotools config.h.in */
/* #undef CRAY_STACKSEG_END */
/* #undef DLL_EXPORT */
/* #undef DLL_NETCDF */

#include <ncconfigure.h>

//#define _NCOPEN_DEBUG_X

#endif
