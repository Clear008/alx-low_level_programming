#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: an array
 * @size: size of array
 * @cmp: fonction to a pointer
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int));
{
int i;
if (array && cmp && size)

for (i = 0; i < size; i++)
{
if (cmp(array[i])
	return (i);
}
return (-1);
}
