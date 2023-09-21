#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @c: a string
 * Return: c
 */
char *rot13(char *c)
{
int i = 0;
while (c[i] != '\0')
{
if ((c[i] >= 'a' && c[i] <= 'z'))
{
if (c[i] + 13 <= 'z')
{
c[i] += 13;
}
else
{
c[i] -= 13;
}
}
i++;
}
return (c);
}
