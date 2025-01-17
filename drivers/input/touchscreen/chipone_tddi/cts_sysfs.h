// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef CTS_SYSFS_H
#define CTS_SYSFS_H

#include "cts_config.h"

struct device;

#ifdef CONFIG_CTS_SYSFS
extern int cts_argc;
extern char *cts_argv[];
extern int cts_sysfs_add_device(struct device *dev);
extern void cts_sysfs_remove_device(struct device *dev);
extern int cts_parse_arg(const char *buf, size_t count);
#else /* CONFIG_CTS_SYSFS */
static inline int cts_sysfs_add_device(struct device *dev)
{
    return -ENOTSUPP;
}

static inline void cts_sysfs_remove_device(struct device *dev)
{
}
#endif /* CONFIG_CTS_SYSFS */

#endif /* CTS_SYSFS_H */
