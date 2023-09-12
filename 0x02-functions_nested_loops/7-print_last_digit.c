#include "main.h"
/**
 * print_last_digit -  of a number
 *@n: number 
 * Return: last digit
*/
int print_last_digit(int n)
{
int a;
if (n < 0 )

a = -n % 10;

if (n > 0)
a = n % 10;
_putchar(a +'0');

return (a);

}
