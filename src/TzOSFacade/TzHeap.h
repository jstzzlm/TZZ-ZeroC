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
#ifndef TZZEROC_TZOSADAPTER_TZHEAP_H
#define TZZEROC_TZOSADAPTER_TZHEAP_H

#include <stdint.h>

#include "TzOSFacadeExport.h"

/**
 * 分配指定字节的堆内存
 *
 * @param sz 指定分配内存的字节个数;
 * @return 成功,返回指向新分配堆内存的指针.失败,返回0.
 */
TZOS_API(void *) tz_malloc(uint32_t sz);

/**
 * 释放分配到堆上的内存
 *
 * @param p 指向被释放堆内存的二级指针;
 */
TZOS_API(void) tz_free(void **p);

/**
 * 分配指定字节的堆内存,并全部初始化为0.
 *
 * @param sz 指定分配内存的字节个数;
 * @return 成功,返回指向新分配堆内存的指针.失败,返回0.
 */
TZOS_API(void *) tz_mallocz(uint32_t size);

/**
 * 重新分配堆内存
 *
 * @param p 指向堆内存的二级指针;
 * @param nsz 指定新的内存大小;
 * @return 成功,返回0;失败返回-1;
 */
TZOS_API(int32_t) tz_realloc(void **p, uint32_t nsz);

#endif