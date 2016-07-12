#ifndef TZZEROC_TZOSFACADE_TZOSFACADEEXPORT_H
#define TZZEROC_TZOSFACADE_TZOSFACADEEXPORT_H

#ifdef WIN32
#  ifdef TZOSFACADE_EXPORT
#    define TZOS_API(rettype)    extern __declspec(dllexport) rettype __stdcall
#  else
#    define TZOS_API(rettype)    extern __declspec(dllimport) rettype __stdcall
#  endif
#else
#  define TZOS_API(rettype)     extern rettype __stdcall
#endif

#endif
