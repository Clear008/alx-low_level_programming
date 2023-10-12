#include<stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
/**
 * print_string - a function that prints a string
 * @n: last integer
 * @separator: is the string to be printed between strings
 */


void print_strings(const char *separator, const unsigned int n, ...);
{
unsigned int i;
va_list la;
char *s;
va_start(la, n);

for (i = 0 ; i < n ; i++)
{
s = va_arg(la, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);

printf("%d", va_arg(la, int));
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
va_end(la);
printf("\n");
}
