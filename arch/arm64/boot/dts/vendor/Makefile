vendor := $(srctree)/$(src)

ifeq ($(CONFIG_MACH_REALME_RMX1801),y)
	subdir-y += qcom/realme
else ifneq "$(wildcard $(vendor)/qcom)" ""
	subdir-y += qcom
endif
