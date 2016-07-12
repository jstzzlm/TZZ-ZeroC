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

#include "TzHeap.h"
#include <stdlib.h>

void * __stdcall tz_malloc(uint32_t sz)
{
    return 0;
}

void __stdcall tz_free(void **p)
{
    if (p && *p)
    {
        free(*p);
        *p = 0;
    }
}

void * __stdcall tz_mallocz(uint32_t size)
{
    return 0;
}

int32_t __stdcall tz_realloc(void **p, uint32_t nsz)
{
    return 0;
}