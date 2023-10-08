#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 *_realloc - unction that reallocates a memory block using malloc and free
 *@ptr:  is a pointer to the memory previously allocated
 *@old_size: s the size, in bytes, of the allocated space for ptr
 *@new_size: is the new size, in bytes of the new memory block
 *Return: to a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
if (new_size > old_size)
{
p = malloc(new_size);
if (p == NULL)
{
	return (NULL);
}
memcpy(p, ptr, old_size);
free(ptr);
}
else if (new_size == old_size)
{
	return (ptr);
}
else if (ptr == NULL)
{
	p = malloc(new_size);
if (p == NULL)
{
	return (NULL);
}
}
else if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
return (p);
}

