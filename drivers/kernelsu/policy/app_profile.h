#ifndef __KSU_H_APP_PROFILE
#define __KSU_H_APP_PROFILE

#include "uapi/app_profile.h"
#include <linux/init.h>
#include <linux/version.h>

#define TIF_KSU_DISABLE_ESCAPE_WITH_ROOT 63

// Escalate current process to root with the appropriate profile
int escape_with_root_profile(void);

void escape_to_root_for_init(void);

#if LINUX_VERSION_CODE < KERNEL_VERSION(5, 11, 0)
void ksu_disable_seccomp(void);
#endif

void __init ksu_app_profile_init(void);

#endif
