
#ifndef _OgreHlmsExport_H
#define _OgreHlmsExport_H

#ifdef OGREHLMS_STATIC_DEFINE
#  define _OgreHlmsExport
#  define OGREHLMS_NO_EXPORT
#else
#  ifndef _OgreHlmsExport
#    ifdef OgreHLMS_EXPORTS
        /* We are building this library */
#      define _OgreHlmsExport __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define _OgreHlmsExport __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef OGREHLMS_NO_EXPORT
#    define OGREHLMS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef OGREHLMS_DEPRECATED
#  define OGREHLMS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef OGREHLMS_DEPRECATED_EXPORT
#  define OGREHLMS_DEPRECATED_EXPORT _OgreHlmsExport OGREHLMS_DEPRECATED
#endif

#ifndef OGREHLMS_DEPRECATED_NO_EXPORT
#  define OGREHLMS_DEPRECATED_NO_EXPORT OGREHLMS_NO_EXPORT OGREHLMS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef OGREHLMS_NO_DEPRECATED
#    define OGREHLMS_NO_DEPRECATED
#  endif
#endif

#endif /* _OgreHlmsExport_H */
