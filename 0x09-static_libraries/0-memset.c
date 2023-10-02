#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to be fill
 * @b: the constant byte
 * @n: number of bytes to be set to the value
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{

unsigned char *p = (unsigned char *) s;

unsigned int i;
for (i = 0; i < n ; i++)

p[i] = (unsigned char)b;

return (s);
}
