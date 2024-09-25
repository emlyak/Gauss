#ifndef DLLEXPORT_H
#define DLLEXPORT_H

#ifndef __linux__
    #if defined( GAUSS_EXPORTS )
        #define DLL_GAUSS_EXPORT __declspec(dllexport)
    #else // !BUILDING_DLL
        #define DLL_GAUSS_EXPORT __declspec(dllimport)
    #endif // BUILDING_DLL
#else
    #define DLL_GAUSS_EXPORT
#endif // __linux__

#endif