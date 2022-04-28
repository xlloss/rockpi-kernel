#include <linux/init.h>
#include <linux/module.h>

static int hello_world_init(void)
{
	printk("Hello world\n")

	return 0;
}

static void hello_world_exit(void)
{
	printk("Goodbye, Hello world\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("This is Hello World");
MODULE_VERSION("V1");
