#include "search_algos.h"
/**
 * linear_search - Function that searches for a value
 * in an array using Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}

