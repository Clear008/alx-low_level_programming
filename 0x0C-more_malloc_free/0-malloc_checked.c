#include "main.h"
#include<stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 * @b: an unsigned int
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
unsigned int *p;
p = malloc(b);
if (p == NULL)
exit(98);

return (p);
}
