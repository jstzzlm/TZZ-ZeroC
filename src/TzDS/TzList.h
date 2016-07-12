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
#ifndef TZZEROC_TZDS_TZLIST_H
#define TZZEROC_TZDS_TZLIST_H

#include <stdint.h>
#include "TzDataStructureExport.h"

typedef void *  list_elem_t;
typedef void *  list_t;

/**
 * 创建一个新的单链表
 */
TZDS_API(list_t) tz_list_make();

/**
 * 释放一个单链表并将链表指针置为空
 */
TZDS_API(void) tz_list_free(list_t *list);

/**
 * 在指定元素的后面插入一个新元素
 */
TZDS_API(int32_t) tz_list_insert(list_t list, list_elem_t elem, void **data);

/**
 * 从单链表中删除指定元素
 */
TZDS_API(int32_t) tz_list_remove(list_t list, list_elem_t elem, void **data);

/**
 * 在单链表的头元素之前插入一个新元素
 */
TZDS_API(int32_t) tz_list_push_head(list_t list, void **data);

/**
 * 移除单链表的头元素
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