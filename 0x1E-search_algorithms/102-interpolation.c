#include "search_algos.h"
/**
 * interpolation_search - Function that searches for a value
 * in an array using interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t i, left = 0, right = size - 1;

if (array == NULL)
return (-1);

for (; right >= left;)
{
i = left + (((double)(right - left) /
(array[right] - array[left])) * (value - array[left]));
if (i < size)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
else
{
printf("Value checked array[%ld] is out of range\n", i);
break;
}

if (array[i] == value)
return (i);
if (array[i] > value)
right = i - 1;
else
left = i + 1;
}

return (-1);
}

