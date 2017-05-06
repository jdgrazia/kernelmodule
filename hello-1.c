#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


MODULE_LICENSE("GPL");

static int __init in(void){

	printk(KERN_INFO "fuck off");
	return 0;
}

static void __exit out(void){

	printk(KERN_INFO "I'm out bitches");
}

module_init(in);
module_exit(out);

