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
#ifndef TZZEROC_TZMEMORY_TZSTRING_H
#define TZZEROC_TZMEMORY_TZSTRING_H

#include <stdint.h>
#include "TzMemExport.h"

/**
 * ��ָ���ַ���������һ���µ��ַ���.
 */
TZMEM_API(char *) tz_strnew(const char *s);
TZMEM_API(char *) tz_strcpy(char *ds, const char *ss);
TZMEM_API(uint32_t) tz_strlen(const char *s);

/**
 * ��ȡ�����ַ�����Ŀ���ַ������״γ��ֵ�λ��.
 */
TZMEM_API(char *) tz_strstr(const char *s, const char *search);

#endif
