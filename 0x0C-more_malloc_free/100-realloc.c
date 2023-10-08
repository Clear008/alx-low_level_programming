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
void *p;

if (ptr == NULL)
{
p = malloc(new_size);

return (p);
}

else if (new_size == 0)
{
free(ptr);
return (NULL);
}


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

return (p);
}

