//#include "../vp8/util/memory.hh"

#ifndef _DECODER_PLATFORM_DEFS_HH_
#define _DECODER_PLATFORM_DEFS_HH_

#if defined (__linux) || defined (__APPLE__)
#define SIRIKATA_FUNCTION_EXPORT __attribute__ ((visibility("default")))
#define SIRIKATA_EXPORT __attribute__ ((visibility("default")))
#define SIRIKATA_PLUGIN_EXPORT __attribute__ ((visibility("default")))
#else
#define SIRIKATA_FUNCTION_EXPORT
#define SIRIKATA_EXPORT
#define SIRIKATA_PLUGIN_EXPORT
#define __builtin_expect(x, y) x
#endif

#define USE_MMAP
namespace Sirikata
{
    typedef int64_t int64;
    typedef uint64_t uint64;
    typedef int32_t int32;
    typedef uint32_t uint32;
    typedef uint16_t uint16;
    typedef int16_t int16;
    typedef uint8_t uint8;
    typedef uint8_t byte;
    typedef int8_t int8;
}

#endif //_DECODER_PLATFORM_DEFS_HH_
