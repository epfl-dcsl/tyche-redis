/* ==========================================================================
 * setcpuaffinity.c - Linux/BSD setcpuaffinity.
 * --------------------------------------------------------------------------
 * Copyright (C) 2020  zhenwei pi
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to permit
 * persons to whom the Software is furnished to do so, subject to the
 * following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 * ==========================================================================
 */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define __linux__
#ifdef __linux__
#include <sched.h>
#endif
#ifdef __FreeBSD__
#include <sys/param.h>
#include <sys/cpuset.h>
#endif
#ifdef __DragonFly__
#include <pthread.h>
#include <pthread_np.h>
#endif
#ifdef __NetBSD__
#include <pthread.h>
#include <sched.h>
#endif
#include "config.h"
#undef __linux__

#ifdef USE_SETCPUAFFINITY

/* set current thread cpu affinity to cpu list, this function works like
 * taskset command (actually cpulist parsing logic reference to util-linux).
 * example of this function: "0,2,3", "0,2-3", "0-20:2". */
void setcpuaffinity(const char *cpulist) {
}

#endif /* USE_SETCPUAFFINITY */
