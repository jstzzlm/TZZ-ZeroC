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
#ifndef TZZEROC_TZDS_TZLIST_H
#define TZZEROC_TZDS_TZLIST_H

#include <stdint.h>
#include "TzDataStructureExport.h"

typedef void *  list_elem_t;
typedef void *  list_t;

/**
 * ����һ���µĵ�����
 */
TZDS_API(list_t) tz_list_make();

/**
 * �ͷ�һ��������������ָ����Ϊ��
 */
TZDS_API(void) tz_list_free(list_t *list);

/**
 * ��ָ��Ԫ�صĺ������һ����Ԫ��
 */
TZDS_API(int32_t) tz_list_insert(list_t list, list_elem_t elem, void **data);

/**
 * �ӵ�������ɾ��ָ��Ԫ��
 */
TZDS_API(int32_t) tz_list_remove(list_t list, list_elem_t elem, void **data);

/**
 * �ڵ������ͷԪ��֮ǰ����һ����Ԫ��
 */
TZDS_API(int32_t) tz_list_push_head(list_t list, void **data);

/**
 * �Ƴ��������ͷԪ��
 */
TZDS_API(int32_t) tz_list_pop_head(list_t list, void **data);

TZDS_API(int32_t) tz_list_push_tail(list_t list, void **data);
TZDS_API(int32_t) tz_list_pop_tail(list_t list, void **data);

TZDS_API(list_elem_t) tz_list_head(list_t list);
TZDS_API(list_elem_t) tz_list_tail(list_t list);

TZDS_API(int32_t) tz_list_is_head(list_t list, list_elem_t elem);
TZDS_API(int32_t) tz_list_is_tail(list_t list, list_elem_t elem);

TZDS_API(uint64_t) tz_list_size(list_t list);

TZDS_API(list_elem_t) tz_list_next(list_t list, list_elem_t elem);
TZDS_API(void *) tz_list_data(list_elem_t elem);


#endif