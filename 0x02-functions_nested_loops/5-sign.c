#include "main.h"
/**
 *print_sign  - check sign
 *@n ckeck @n
 *Return: 1 and prints + if @n is greater than zero
 *Return 0 and prints 0 if @n is zero and
 *Return -1 and prints - if @n is less than zero
*/

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
putchar(',');
putchar(' ');
return (1);
}
else if (n < 0)
{

putchar('-');
putchar(',');
putchar(' ');
return (-1);
}
else
{
putchar('0');
putchar(',');
putchar(' ');

return (0);
}
}
