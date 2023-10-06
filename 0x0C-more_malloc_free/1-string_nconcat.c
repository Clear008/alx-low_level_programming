#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n:number of bytes for string 2
 * Return: pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(const char *s1, const char *s2, unsigned int n)
{
char *str;
int i, j;

str = (char *)malloc(strlen(s1) + n + 1);
if (str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
str[i] = s1[i];
}

for (j = 0; j < n && s2[j] != '\0'; j++)
{
str[i++] = s2[j];
}

str[i] = '\0';

return (str);
}
