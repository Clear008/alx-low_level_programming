#include "main.h"
/**
*_strchr - locates a character in a string
*@s: a string
*@c: a character
*Return: to the first occurrence of the character c in the string s
*/
char *_strchr(char *s, char c)
{
unsigned char *p = (unsigned char *)s;

while (*p != '\0')
{
if (*p == c)
{
return (p);
}
p++;
}

return (NULL);
}
