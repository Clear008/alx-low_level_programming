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
char *s = ", ";
va_start(ls, format);

while (format && format[i])
i++;
while (format && format[j])
{
if (j == (i - 1))
{
s = "";
}
switch (format[j])
{
case 'c':
printf("%c%s", va_arg(ls, int), s);
break;
case 'i':
printf("%d%s", va_arg(ls, int), s);
break;
case'f':
printf("%f%s", va_arg(ls, double), s);
break;
case 's':
str = va_arg(ls, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, s);
break;
}
j++;
}
printf("\n");
va_end(ls);
}

