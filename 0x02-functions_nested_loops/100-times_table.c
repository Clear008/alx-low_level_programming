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

if (mul < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (mul < 100)
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
int digit[3] = {0};
int count = 0;

while (temp > 0)
{
digit[count++] = tem % 10;
temp /= 10;
}
for (int k = count - 1; k >=0;k --)
{
putchar(digit[k] + '0');
}
}
}
_putchar('\n');
}
}
