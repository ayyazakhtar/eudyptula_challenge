#include <linux/init.h>
#include <linux/module.h>


static int task01_init(void)
{
	printk(KERN_ALERT "Hello World!\n");
	return 0;
}

static void task01_exit(void)
{
	printk(KERN_ALERT "GoodBye World\n");
}

module_init(task01_init);
module_exit(task01_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ayyaz Akhtar");
MODULE_DESCRIPTION("task01 description goes here");
