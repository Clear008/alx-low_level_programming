#include "main.h"
/**
 * print_times_table  - prints the n times table, starting with 0.
 * @n: a number 
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
{
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int mul = i * j;
_putchar(mul + '0');
_putchar(',');
_putchar(' ');

if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
