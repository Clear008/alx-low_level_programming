#include "main.h"
/**
 * puts2 - prints every other character of a string
 *@str: string
*/

void puts2(char *str)

{
int i;

for (i = 0 ; i < 10 ; i++)
{
if (i % 2 == 0)


_putchar(str[i] + '0');

}
_putchar('\n');

}
