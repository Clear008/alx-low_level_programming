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

if (j > 0)
{
_putchar(',');
_putchar(' ');
}

if (mul < 10 && j > 0)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (mul < 100 && j > 0)
{
_putchar(' ');
_putchar(' ');
}
else if (j > 0)
{
_putchar(' ');
}

if (mul == 0) 
{
putchar('0');
}
else
{
int temp = mul;
int digits[3] = {0};
int count = 0;
int k;

while (temp > 0)
{
digits[count++] = temp % 10;
temp /= 10;
}
for (k = count - 1; k >= 0 ;k --)
{
_putchar(digits[k] + '0');
}
}
}
_putchar('\n');
}
}
