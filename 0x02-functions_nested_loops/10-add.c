#include "main.h"
/**
 * add integers
 *
 * Return: result of the addition
 */
int add(int a, int b)
{
int sum = a + b;
if ( sum < 10 )
{
_putchar(sum + '0');
}
else
{
_putchar((sum/10) + '0' );
_putchar((sum%10) + '0' );
}
return (sum);
}
