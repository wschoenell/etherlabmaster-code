#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x992878f3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xdfa6c53a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2966ff0c, __VMLINUX_SYMBOL_STR(ecdev_open) },
	{ 0xc0a99ee6, __VMLINUX_SYMBOL_STR(ecdev_withdraw) },
	{ 0x871b860e, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xeb0c8e2, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x9eaf4194, __VMLINUX_SYMBOL_STR(dev_base_lock) },
	{ 0x4652b2d9, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xc58f634e, __VMLINUX_SYMBOL_STR(ecdev_offer) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xfda65eae, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xcf465ad5, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xddd72a6d, __VMLINUX_SYMBOL_STR(ecdev_receive) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeced9ed1, __VMLINUX_SYMBOL_STR(ecdev_set_link) },
	{ 0x9e86d2f1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x2a511514, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xca4772fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9cee7aab, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd342570b, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x2e8bc2c, __VMLINUX_SYMBOL_STR(ecdev_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ec_master";


MODULE_INFO(srcversion, "1AE486D6201500C92B67C63");
