#
# Makefile for the touchscreen drivers.
#
# Vendor code uses VLAs for bounded scratch buffers
subdir-ccflags-y += -Wno-vla -Wno-vla-extension
ccflags-y += -Wno-vla -Wno-vla-extension
subdir-ccflags-$(CONFIG_TOUCHPANEL_MTK_PLATFORM) += -I$(srctree)/drivers/misc/mediatek/include/

obj-$(CONFIG_TOUCHPANEL_OPPO) += util_interface/
obj-$(CONFIG_TOUCHPANEL_OPPO) += touchpanel_common_driver.o
obj-$(CONFIG_TOUCHPANEL_NOVA) += Novatek/
obj-$(CONFIG_TOUCHPANEL_HIMAX) += Himax/

