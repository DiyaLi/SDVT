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
	{ 0x71804050, __VMLINUX_SYMBOL_STR(os_if_queue_task) },
	{ 0xa2985994, __VMLINUX_SYMBOL_STR(vCanCleanup) },
	{ 0x765bf321, __VMLINUX_SYMBOL_STR(os_if_spin_lock_irqsave) },
	{ 0xa1fce070, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf34abfa7, __VMLINUX_SYMBOL_STR(os_if_read_lock_irqsave) },
	{ 0x27c2fc9f, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xebe36af0, __VMLINUX_SYMBOL_STR(os_if_read_unlock_irqrestore) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xbaec386e, __VMLINUX_SYMBOL_STR(os_if_delete_waitqueue_head) },
	{ 0x96724e9, __VMLINUX_SYMBOL_STR(os_if_spin_unlock_irqrestore) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6352918e, __VMLINUX_SYMBOL_STR(queue_empty) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb17c5d2f, __VMLINUX_SYMBOL_STR(queue_front) },
	{ 0xb76b5ab4, __VMLINUX_SYMBOL_STR(vCanDispatchEvent) },
	{ 0x28af639c, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x70651e3a, __VMLINUX_SYMBOL_STR(set_capability_value) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x7ecbdacf, __VMLINUX_SYMBOL_STR(queue_wakeup_on_space) },
	{ 0xc40aaa0f, __VMLINUX_SYMBOL_STR(queue_pop) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1dae314d, __VMLINUX_SYMBOL_STR(os_if_init_sema) },
	{ 0x22d550da, __VMLINUX_SYMBOL_STR(os_if_rwlock_remove) },
	{ 0x42761ccc, __VMLINUX_SYMBOL_STR(vCanInitData) },
	{ 0x451c7bd4, __VMLINUX_SYMBOL_STR(os_if_kernel_malloc) },
	{ 0x73ad21b3, __VMLINUX_SYMBOL_STR(os_if_write_lock_irqsave) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xee17bcb5, __VMLINUX_SYMBOL_STR(os_if_down_sema) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf00494f9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x9338dd27, __VMLINUX_SYMBOL_STR(os_if_kernel_free) },
	{ 0xfa49442f, __VMLINUX_SYMBOL_STR(os_if_set_task_uninterruptible) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x60127119, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xdf065c72, __VMLINUX_SYMBOL_STR(os_if_rwlock_init) },
	{ 0xae4926a0, __VMLINUX_SYMBOL_STR(vCanInit) },
	{ 0xadc9c832, __VMLINUX_SYMBOL_STR(os_if_up_sema) },
	{ 0x7cbbc393, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6bc288a8, __VMLINUX_SYMBOL_STR(os_if_init_waitqueue_head) },
	{ 0x6413f30d, __VMLINUX_SYMBOL_STR(queue_reinit) },
	{ 0x6f531240, __VMLINUX_SYMBOL_STR(queue_release) },
	{ 0x371e4ec3, __VMLINUX_SYMBOL_STR(os_if_init_task) },
	{ 0x4a2261d9, __VMLINUX_SYMBOL_STR(os_if_wait_for_event_timeout_simple) },
	{ 0xde014b7c, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x733211e, __VMLINUX_SYMBOL_STR(os_if_spin_lock) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x596ffe3d, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x77b6228e, __VMLINUX_SYMBOL_STR(os_if_spin_lock_remove) },
	{ 0x2160b193, __VMLINUX_SYMBOL_STR(os_if_write_unlock_irqrestore) },
	{ 0xe79ea4d0, __VMLINUX_SYMBOL_STR(os_if_wake_up_interruptible) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvcommon";


MODULE_INFO(srcversion, "8BBD55F142EDE12DB5ED236");
