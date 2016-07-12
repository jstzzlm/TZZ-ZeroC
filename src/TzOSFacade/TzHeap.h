/**
 * Copyright (c) 2016, ������ս������(TZZ)
 *
 * Contact	:	jstzzlm@hotmail.com
 * Web Site :	http://www.jstzzlm.com
 *
 * Author	:	����(cooben)
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
 * ����ָ���ֽڵĶ��ڴ�
 *
 * @param sz ָ�������ڴ���ֽڸ���;
 * @return �ɹ�,����ָ���·�����ڴ��ָ��.ʧ��,����0.
 */
TZOS_API(void *) tz_malloc(uint32_t sz);

/**
 * �ͷŷ��䵽���ϵ��ڴ�
 *
 * @param p ָ���ͷŶ��ڴ�Ķ���ָ��;
 */
TZOS_API(void) tz_free(void **p);

/**
 * ����ָ���ֽڵĶ��ڴ�,��ȫ����ʼ��Ϊ0.
 *
 * @param sz ָ�������ڴ���ֽڸ���;
 * @return �ɹ�,����ָ���·�����ڴ��ָ��.ʧ��,����0.
 */
TZOS_API(void *) tz_mallocz(uint32_t size);

/**
 * ���·�����ڴ�
 *
 * @param p ָ����ڴ�Ķ���ָ��;
 * @param nsz ָ���µ��ڴ��С;
 * @return �ɹ�,����0;ʧ�ܷ���-1;
 */
TZOS_API(int32_t) tz_realloc(void **p, uint32_t nsz);

#endif