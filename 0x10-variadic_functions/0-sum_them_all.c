#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: last integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;
va_list la;

if (n == 0)
return (0);

va_start(la, n);
sum = 0;
for (i = 0 ; i < n ; i++)

sum += va_arg(la, int);

va_end(la);
return (sum);

}
