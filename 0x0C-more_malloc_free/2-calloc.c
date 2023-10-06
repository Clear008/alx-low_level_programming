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
unsigned int *p;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
return (NULL);

p = (unsigned int *)malloc(nmemb * sizeof(unsigned int));
if (p == 0)
return (NULL);

for (; i < nmemb * size; i++)
{
p[i] = 0;
}
return (p);
