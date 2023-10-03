#include "main.h"
#include<stdlib.h>
/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char
 *@size: size od array
 *@c: a character
 *Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}

