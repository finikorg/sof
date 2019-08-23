/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2018 Intel Corporation. All rights reserved.
 *
 * Author: Liam Girdwood <liam.r.girdwood@linux.intel.com>
 */

#ifndef __INCLUDE_ATOMIC_H_
#define __INCLUDE_ATOMIC_H_

#include <atomic.h>

static inline int32_t atomic_read(const atomic_t *a)
{
	return atomic_get(a);
}

static inline void atomic_init(atomic_t *a, int32_t value)
{
	atomic_set(a, value);
}

#endif
