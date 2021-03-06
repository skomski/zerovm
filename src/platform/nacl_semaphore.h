/*
 * Copyright 2008 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can
 * be found in the LICENSE file.
 */

/*
 * NaCl semaphore cross-platform abstraction
 */
#ifndef NATIVE_CLIENT_SRC_TRUSTED_PLATFORM_NACL_SEMAPHORE_H_
#define NATIVE_CLIENT_SRC_TRUSTED_PLATFORM_NACL_SEMAPHORE_H_

#include "include/nacl_base.h"
#include "src/platform/linux/nacl_semaphore.h"

EXTERN_C_BEGIN

struct NaClSemaphore;

int NaClSemCtor(struct NaClSemaphore *sem, int32_t value);

void NaClSemDtor(struct NaClSemaphore *sem);

NaClSyncStatus NaClSemWait(struct NaClSemaphore *sem);

NaClSyncStatus NaClSemPost(struct NaClSemaphore *sem);

EXTERN_C_END

#endif  /* NATIVE_CLIENT_SRC_TRUSTED_PLATFORM_NACL_SEMAPHORE_H_ */
