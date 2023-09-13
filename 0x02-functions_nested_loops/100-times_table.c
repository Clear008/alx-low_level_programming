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
if (j < n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}

if (mul <= 9)
{
_putchar(mul + '0');
}

else
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
}
_putchar('\n');
}
}
