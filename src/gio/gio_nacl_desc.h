/*
 * Copyright 2010 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can
 * be found in the LICENSE file.
 */

/*
 * Subclass of the gio object that wraps NaClDesc objects.  Direct
 * read/write pass through is done.
 */

#ifndef NATIVE_CLIENT_SRC_TRUSTED_GIO_WRAPPED_DESC_GIO_NACL_DESC_H_
#define NATIVE_CLIENT_SRC_TRUSTED_GIO_WRAPPED_DESC_GIO_NACL_DESC_H_

#include "include/nacl_base.h"
#include "src/gio/gio.h"

EXTERN_C_BEGIN

struct NaClDesc;

struct NaClGioNaClDesc {
  struct Gio      base;
  struct NaClDesc *wrapped;
};

#endif  /* NATIVE_CLIENT_SRC_TRUSTED_GIO_WRAPPED_DESC_GIO_NACL_DESC_H_ */
