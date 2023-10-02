#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination pointer
 *@src: source pointer
 *@n: bytes from memory area
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0 ; src[i] != '\0' && i < n ; i++)
{
dest[i] = src[i];
}
for (; i < n ; i++)
{
dest[i] = '\0';
}

return (dest);
}
