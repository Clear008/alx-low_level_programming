#include "main.h"
/**
 *print_triangle - prints a triangle, followed by a new line
 *
 *@size: a number
*/

void print_triangle(int size)
{
int i;
int j;

if (size <= 0)

putchar('\n');

else

for (i = 0 ; i < size ; i++)
{

for (j = 0 ; j < (size - i - 1) ; j++)
{
putchar(' ');
}
for (j = 0 ; j <= i ; j++)
{
putchar('#');
}
putchar('\n');
}
}
