#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
va_list ls;
char *str;
int i = 0, j = 0;

va_start(ls, format);

while (format && format[i])
i++;
while (format && format[j])
{

switch (format[j])
{
case 'c':
printf("%c, ", va_arg(ls, int));
break;
case 'i':
printf("%d, ", va_arg(ls, int));
break;
case'f':
printf("%f, ", va_arg(ls, double));
break;
case 's':
str = va_arg(ls, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
j++;
}
printf("\n");
va_end(ls);
}

