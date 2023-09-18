#include "main.h"
#include<string.h>
/**
 * puts_half - prints half of a string
 *@str: string
*/
void puts_half(char *str)
{
int n,i;
int length_of_the_string = strlen(str);
n = length_of_the_string  / 2;
for (i = n ; i < length_of_the_string ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
