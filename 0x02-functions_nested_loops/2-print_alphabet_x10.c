#include "main.h"

/**
 * print_alphabet_x10 -  the alphabet a - z ten times 
 *
*/

void print_alphabet_x10(void)
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
