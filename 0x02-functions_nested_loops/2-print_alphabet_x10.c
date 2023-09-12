#include "main.h"

/**
 * print_alphabet -  the alphabet a - z
 *
*/

void print_alphabet(void)
{

int i;
int j = 0;

while (j < 10)
{

for (i = 'a' ; i <= 'z' ; i++)

{
_putchar(i);

_putchar('\n');

}
j++;

}
}
