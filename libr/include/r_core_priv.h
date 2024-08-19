/* radare - LGPL - Copyright 2024 - pancake */

#include <r_core.h>
#ifndef R2_CORE_PRIV_H
#define R2_CORE_PRIV_H

#if R2_USE_NEW_ABI
typedef struct {
	int old_bits;
	char *old_arch;
} RCorePriv;
#endif

#endif