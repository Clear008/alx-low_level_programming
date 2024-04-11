#include "search_algos.h"
/**
 * jump_search - Function that searches for a value
 * in an array using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1
 */

int jump_search(int *array, size_t size, int value)
{
size_t indx, jump, step;

if (array == NULL || size == 0)
return (-1);

step = sqrt(size);
for (indx = jump = 0; jump < size && array[jump] < value;)
{
printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
indx = jump;
jump += step;
}

printf("Value found between indexes [%ld] and [%ld]\n", indx, jump);

jump = jump < size - 1 ? jump : size - 1;
for (; indx < jump && array[indx] < value; indx++)
printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);
printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);

return (array[indx] == value ? (int)indx : -1);
}

