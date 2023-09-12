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
putchar(a +'0');

else
a = n % 10;
putchar(a +'0');

return (a);

}
