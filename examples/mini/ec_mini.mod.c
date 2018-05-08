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
	{ 0x52a57b19, __VMLINUX_SYMBOL_STR(ecrt_master_receive) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc1387e38, __VMLINUX_SYMBOL_STR(ecrt_master_create_domain) },
	{ 0xd3ca4768, __VMLINUX_SYMBOL_STR(ecrt_master_send) },
	{ 0xd497e1df, __VMLINUX_SYMBOL_STR(ecrt_domain_queue) },
	{ 0x62cc1dc6, __VMLINUX_SYMBOL_STR(ecrt_master_send_ext) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc60fbe29, __VMLINUX_SYMBOL_STR(ecrt_domain_reg_pdo_entry_list) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xca242cd4, __VMLINUX_SYMBOL_STR(ecrt_domain_process) },
	{ 0x5addb978, __VMLINUX_SYMBOL_STR(ecrt_domain_state) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xbca48881, __VMLINUX_SYMBOL_STR(ecrt_master_callbacks) },
	{ 0xb17ff896, __VMLINUX_SYMBOL_STR(ecrt_master_state) },
	{ 0x4f7a5246, __VMLINUX_SYMBOL_STR(ecrt_slave_config_state) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x1f4ae59, __VMLINUX_SYMBOL_STR(ecrt_master_slave_config) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xe0afc23f, __VMLINUX_SYMBOL_STR(ecrt_slave_config_pdos) },
	{ 0x6852cc47, __VMLINUX_SYMBOL_STR(ecrt_domain_external_memory) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1fb2742, __VMLINUX_SYMBOL_STR(ecrt_domain_size) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedad5cd1, __VMLINUX_SYMBOL_STR(ecrt_master_activate) },
	{ 0x65896a45, __VMLINUX_SYMBOL_STR(ecrt_release_master) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf65d9551, __VMLINUX_SYMBOL_STR(ecrt_request_master) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ec_master";


MODULE_INFO(srcversion, "7D79A65FE0B0BD05CFF427C");
