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
	{ 0x5c7202ab, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe3318f05, __VMLINUX_SYMBOL_STR(os_if_spin_unlock) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa9ea74eb, __VMLINUX_SYMBOL_STR(queue_init) },
	{ 0xa2985994, __VMLINUX_SYMBOL_STR(vCanCleanup) },
	{ 0x765bf321, __VMLINUX_SYMBOL_STR(os_if_spin_lock_irqsave) },
	{ 0xadb56176, __VMLINUX_SYMBOL_STR(queue_length) },
	{ 0x5624fead, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb737886e, __VMLINUX_SYMBOL_STR(os_if_init_waitqueue_entry) },
	{ 0x1403b7a8, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5740a430, __VMLINUX_SYMBOL_STR(os_if_wait_for_event_timeout) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x96724e9, __VMLINUX_SYMBOL_STR(os_if_spin_unlock_irqrestore) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2f868165, __VMLINUX_SYMBOL_STR(os_if_destroy_task) },
	{ 0x6352918e, __VMLINUX_SYMBOL_STR(queue_empty) },
	{ 0xd89e982e, __VMLINUX_SYMBOL_STR(queue_push) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb17c5d2f, __VMLINUX_SYMBOL_STR(queue_front) },
	{ 0x4d08c625, __VMLINUX_SYMBOL_STR(queue_add_wait_for_space) },
	{ 0xb76b5ab4, __VMLINUX_SYMBOL_STR(vCanDispatchEvent) },
	{ 0xd2bfaf0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x70651e3a, __VMLINUX_SYMBOL_STR(set_capability_value) },
	{ 0x7ecbdacf, __VMLINUX_SYMBOL_STR(queue_wakeup_on_space) },
	{ 0xe23a850, __VMLINUX_SYMBOL_STR(os_if_delete_sema) },
	{ 0xc40aaa0f, __VMLINUX_SYMBOL_STR(queue_pop) },
	{ 0xb7c8005, __VMLINUX_SYMBOL_STR(os_if_kernel_thread) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x511460f5, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x1dae314d, __VMLINUX_SYMBOL_STR(os_if_init_sema) },
	{ 0x42761ccc, __VMLINUX_SYMBOL_STR(vCanInitData) },
	{ 0x37603510, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x451c7bd4, __VMLINUX_SYMBOL_STR(os_if_kernel_malloc) },
	{ 0xad5568b8, __VMLINUX_SYMBOL_STR(os_if_set_task_interruptible) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x85efc820, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xbdf05c0f, __VMLINUX_SYMBOL_STR(os_if_queue_task_not_default_queue) },
	{ 0xee17bcb5, __VMLINUX_SYMBOL_STR(os_if_down_sema) },
	{ 0xdbdf4d78, __VMLINUX_SYMBOL_STR(os_if_exit_thread) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9338dd27, __VMLINUX_SYMBOL_STR(os_if_kernel_free) },
	{ 0xaa836602, __VMLINUX_SYMBOL_STR(os_if_signal_pending) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae4926a0, __VMLINUX_SYMBOL_STR(vCanInit) },
	{ 0xadc9c832, __VMLINUX_SYMBOL_STR(os_if_up_sema) },
	{ 0xc13d886a, __VMLINUX_SYMBOL_STR(os_if_set_task_running) },
	{ 0xc38bbf6e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x938d1ae5, __VMLINUX_SYMBOL_STR(queue_remove_wait_for_space) },
	{ 0xc6df3a0e, __VMLINUX_SYMBOL_STR(queue_back) },
	{ 0x6413f30d, __VMLINUX_SYMBOL_STR(queue_reinit) },
	{ 0x6f531240, __VMLINUX_SYMBOL_STR(queue_release) },
	{ 0x371e4ec3, __VMLINUX_SYMBOL_STR(os_if_init_task) },
	{ 0x4a2261d9, __VMLINUX_SYMBOL_STR(os_if_wait_for_event_timeout_simple) },
	{ 0xe7b536cc, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x733211e, __VMLINUX_SYMBOL_STR(os_if_spin_lock) },
	{ 0x149d5959, __VMLINUX_SYMBOL_STR(os_if_declare_task) },
	{ 0x77b6228e, __VMLINUX_SYMBOL_STR(os_if_spin_lock_remove) },
	{ 0x579192c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe79ea4d0, __VMLINUX_SYMBOL_STR(os_if_wake_up_interruptible) },
	{ 0x422b07e9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x31645a85, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvcommon";

MODULE_ALIAS("usb:v0BFDp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2E2301738130C266E90C31E");
