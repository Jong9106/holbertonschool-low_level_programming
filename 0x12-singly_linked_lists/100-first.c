#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun -Function to print before de main
 * Return: print before main
 */

void myStartupFun(void)
{
printf
("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

