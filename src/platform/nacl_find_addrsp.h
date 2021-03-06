/*
 * Copyright 2010 The Native Client Authors.  All rights reserved.
 * Use of this source code is governed by a BSD-style license that can
 * be found in the LICENSE file.
 */

#ifndef NATIVE_CLIENT_SRC_SHARED_PLATFORM_NACL_FIND_ADDRSP_H_
#define NATIVE_CLIENT_SRC_SHARED_PLATFORM_NACL_FIND_ADDRSP_H_

#include "include/nacl_base.h"

EXTERN_C_BEGIN

/*
 * Find a chunk of contiguous address space that is heretofore unused.
 * For use by trusted code / code that's willing for this memory to be
 * located anywhere in the address space.
 *
 * Memory size should be multiples of NACL_MAP_PAGESIZE; returned
 * address is appropriate for Map'ing over.  For linux and OSX, we
 * actually leave the memory allocated (but not reserved), since the
 * pages will get mmap'd over anyway and we might as well not create a
 * race condition.  For Windows, wo do NOT leave the memory allocated,
 * so there is a race condition with other threads that may try to use
 * the same portion of the address space.
 *
 * Returns success/fail.
 *
 * If this search fails, most callers would log a fatal error, since
 * it's a really nasty resource exhaustion.  Perhaps some callers can
 * try to garbage collect (compactifying collector of some kind) or
 * otherwise free up address space.
 */

/* bool */
int NaClFindAddressSpace(uintptr_t *addr, size_t memory_size);

EXTERN_C_END

#endif
