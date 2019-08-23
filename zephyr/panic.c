// SPDX-License-Identifier: BSD-3-Clause
//
// Copyright(c) 2019 Intel Corporation. All rights reserved.
//
// Author: Tomasz Lauda <tomasz.lauda@linux.intel.com>

#include <sof/panic.h>
#include <sof/trace.h>

void __panic(uint32_t p, char *filename, uint32_t linenum)
{
	trace_error(TRACE_CLASS_MEM, "fname %s line %u", filename, linenum);

	while (1) ;
}
