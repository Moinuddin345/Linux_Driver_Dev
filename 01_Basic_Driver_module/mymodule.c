#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("mohammed");
MODULE_DESCRIPTION("A Basic Linux Kernel Module");
MODULE_VERSION("1.0");

static int __init mymodule_init(void) {
    printk(KERN_INFO "Hello, Kernel! My module has been loaded.\n");
    return 0;
}

static void __exit mymodule_exit(void) {
    printk(KERN_INFO "Goodbye, Kernel! My module has been unloaded.\n");
    return;
}

module_init(mymodule_init);
module_exit(mymodule_exit);