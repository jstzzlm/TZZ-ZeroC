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
#ifndef TZZEROC_TZMATH_TZPOLYNOME_H
#define TZZEROC_TZMATH_TZPOLYNOME_H

#include "TzMathExport.h"

/**
 * 根据正常次序计算多项式的值.
 */
TZMATH_API(double) tz_polynome_sum1(double a[], uint32_t n, double x);

/**
 * 根据变形后的多项式形式计算多项式的值.
 */
TZMATH_API(double) tz_polynome_sum2(double a[], uint32_t n, double x);

#endif