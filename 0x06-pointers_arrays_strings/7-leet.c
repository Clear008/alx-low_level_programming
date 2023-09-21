#include "main.h"
/**
 *leet -  function that encodes a string into 1337
 *@c: input
 *Return: c
 */
char *leet(char *c)
{
int i, j;
char A1[] = "AaEeOoTtLl";
char A2[] = "4433007711";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
	if (c[i] == A1[j])
	{
		c[i] = A2[j];
	}
}
}
return (c);
}


