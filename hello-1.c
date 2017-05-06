#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void){

	printk(KERN_INFO "fuck off");
	return 0;
}

int cleanup_module(void){

	printk(KERN_INFO "I'm out bitches");
}
