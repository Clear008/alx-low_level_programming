#include "main.h"
/**
 * print_times_table  - prints the n times table, starting with 0.
 * @n: a number 
 */
void print_times_table(int n)
{
int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int mul = i * j;

if (j > 0)
{
_putchar(',');
_putchar(' ');
}

if (mul < 10)
{
_putchar(' ');
}
printf("%d ", mul);
}
_putchar('\n');
}
}
