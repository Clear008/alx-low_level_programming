#include <stdio.h>
#include<stdlib.h>
/**
*_calloc - function that allocates memory for an array, using malloc
*@nmemb: number
*@size: size of a number
*Return:  a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char  *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * sizeof(unsigned int));
if (p == 0)
return (NULL);

for (i = 0; i < nmemb * size; i++)
{
p[i] = 0;
}
return (p);
}
