#include<stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size_s1 = 0, size_s2 = 0;
	char *t;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";


for (i = 0 ; s1[i] != '\0'; i++)
size_s1++;

for (j = 0 ; s2[j] != '\0'; j++)
size_s2++;


t = malloc(sizeof(char) * (size_s1 + size_s2 + 1));

if (t == NULL)
return (NULL);



for (i = 0; s1[i] != '\0'; i++)
{
t[i] = s1[i];
}

for (j = 0; s2[j] != '\0'; j++)
{
	t[i + j] = s2[j];
}

t[i + j] = '\0';

return (t);
}
