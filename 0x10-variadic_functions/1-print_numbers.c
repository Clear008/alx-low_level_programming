#include "variadic_functions.h"
#include<stdarg.h>
/**
 * print_numbers - a function that prints numbers
 * @n: last integer
 * @separator: is the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list la;

if (separator == 0)

va_start(la, n);

for (i = 0 ; i < n ; i++)

printf("%d, ", va_arg(la, int));

va_end(la);
printf("\n");
}
