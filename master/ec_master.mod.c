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
	{ 0x12b0600b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xdfa6c53a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4c9df2aa, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf7d9209, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_eax) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xba08a7dc, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8b18496f, __VMLINUX_SYMBOL_STR(__copy_to_user_ll) },
	{ 0xe28b9ff4, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbe493b5f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbb084feb, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xee61f374, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x28da896, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e75cd54, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfda65eae, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xfddcb3f6, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x34bff052, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x8b468c83, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xf8a6fe12, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_edi) },
	{ 0xcf465ad5, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x334d3473, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xe07fa966, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3a819d38, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x9e86d2f1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe3460c96, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_ecx) },
	{ 0xb6a76094, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x4a00c9c0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x97dee519, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_edx) },
	{ 0x2a511514, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xca4772fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x47e87ef2, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc6fb3cba, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x996c37f5, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x5cc2363, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xab96ab07, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f9c199c, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0xc08451b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2ef14120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1c0934d9, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x13c04016, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6d132cbb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x753a7087, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x518f815a, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DF1F117E01F2901F8FA71AA");
