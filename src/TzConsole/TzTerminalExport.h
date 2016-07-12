/**
 * Copyright (c) 2016, 技术挑战者联盟(TZZ)
 *
 * Contact	:	jstzzlm@hotmail.com
 * Web Site :	http://www.jstzzlm.com
 *
 * Author	:	丁晶(cooben)
 * Date		:	2016/07/10
 *
 * This file is part of TzZeroC.
 *
 * All rights reserved.
 *
 * TzZeroC is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation.
 *
 * TzZeroC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with TzZeroC; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, 
 * MA 02110-1301 USA.
 */
#ifndef TZZEROC_TZTERMINAL_TZTERMINALEXPORT_H
#define TZZEROC_TZTERMINAL_TZTERMINALEXPORT_H

#include <stdint.h>

#ifdef WIN32
#  ifdef TZTERMINAL_EXPORT
#    define TZTERMINAL_API(rettype)    extern __declspec(dllexport) rettype __stdcall
#  else
#    define TZTERMINAL_API(rettype)    extern __declspec(dllimport) rettype __stdcall
#  endif
#else
#  define TZTERMINAL_API(rettype)     extern rettype __stdcall
#endif

#endif