#include "main.h"
/**
 * _strncpy -  function that copies a string.
 *@dest: a string
 *@src: a string
 *@n: number
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i, j;
for (i = 0 ; dest[i] != '\0'; i++)
{
}

for (j = 0 ; src[j] != '\0' && j < n ; j++)
{
dest[i + j] = src[j];
}

dest[i + j] = '\0';

return (dest);
}
