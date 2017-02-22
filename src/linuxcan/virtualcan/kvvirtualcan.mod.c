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
	{ 0xa2985994, __VMLINUX_SYMBOL_STR(vCanCleanup) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x47ab5fa7, __VMLINUX_SYMBOL_STR(vCanTime) },
	{ 0x6352918e, __VMLINUX_SYMBOL_STR(queue_empty) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb17c5d2f, __VMLINUX_SYMBOL_STR(queue_front) },
	{ 0xb76b5ab4, __VMLINUX_SYMBOL_STR(vCanDispatchEvent) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x70651e3a, __VMLINUX_SYMBOL_STR(set_capability_value) },
	{ 0x7ecbdacf, __VMLINUX_SYMBOL_STR(queue_wakeup_on_space) },
	{ 0xc40aaa0f, __VMLINUX_SYMBOL_STR(queue_pop) },
	{ 0x42761ccc, __VMLINUX_SYMBOL_STR(vCanInitData) },
	{ 0x451c7bd4, __VMLINUX_SYMBOL_STR(os_if_kernel_malloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9338dd27, __VMLINUX_SYMBOL_STR(os_if_kernel_free) },
	{ 0xfa49442f, __VMLINUX_SYMBOL_STR(os_if_set_task_uninterruptible) },
	{ 0xae4926a0, __VMLINUX_SYMBOL_STR(vCanInit) },
	{ 0x49b9556e, __VMLINUX_SYMBOL_STR(vCanFlushSendBuffer) },
	{ 0x6f531240, __VMLINUX_SYMBOL_STR(queue_release) },
	{ 0x4a2261d9, __VMLINUX_SYMBOL_STR(os_if_wait_for_event_timeout_simple) },
	{ 0x733211e, __VMLINUX_SYMBOL_STR(os_if_spin_lock) },
	{ 0xe79ea4d0, __VMLINUX_SYMBOL_STR(os_if_wake_up_interruptible) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvcommon";


MODULE_INFO(srcversion, "9C0C67339F4DBC592C16026");
