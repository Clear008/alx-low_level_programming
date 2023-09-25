#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: a string to be scanned
 *@accept: string containing the character to match
 *Return: to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return ('\n');
}
