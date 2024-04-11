#include "search_algos.h"
/**
 * binary_search - Function that searches for a value
 * in an array using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t i;
size_t left = 0, right = size - 1;
if (array == NULL)
return (-1);

for (; left <= right;)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
right = i - 1;
else
left = i + 1;
}
return (-1);
}

