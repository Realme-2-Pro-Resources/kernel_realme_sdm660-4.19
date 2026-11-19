/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Compatibility helpers for OPPO drivers that were written against the
 * legacy msm smem API (smem_alloc/smem_find) of the 4.4 kernel.
 */
#ifndef _SOC_OPPO_SMEM_H
#define _SOC_OPPO_SMEM_H

#include <linux/err.h>
#include <linux/soc/qcom/smem.h>

/* Item IDs as laid out by the RMX1801 bootloader (SMEM_ID_VENDOR1/2) */
#define SMEM_ID_VENDOR0		134
#define SMEM_ID_VENDOR1		135
#define SMEM_ID_VENDOR2		136
#define SMEM_PROJECT		SMEM_ID_VENDOR1
#define SMEM_DRAM_TYPE		SMEM_ID_VENDOR2

/* Returns NULL when smem is not (yet) available or the item is too small */
static inline void *oppo_smem_get(unsigned int item, size_t min_size)
{
	size_t size = 0;
	void *p = qcom_smem_get(QCOM_SMEM_HOST_ANY, item, &size);

	if (IS_ERR_OR_NULL(p) || size < min_size)
		return NULL;
	return p;
}

#endif /* _SOC_OPPO_SMEM_H */
