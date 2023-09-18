#include "main.h"
#include<string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *@str: string
*/
void print_rev(char *str)
{
int length = strlen(str);
int i;
for (i = length - 1 ; i >= 0 ; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
