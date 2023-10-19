#include<stdio.h>


void print_beformain(void) __attribute__ ((constructor));

/**
 *print_beformain - function that execute before main
 */
void print_beformain(void)
{
printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n");
}
