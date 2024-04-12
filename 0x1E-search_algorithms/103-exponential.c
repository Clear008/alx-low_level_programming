#include "search_algos.h"

/**
 *f_binary_search - Searches for a value in a sorted array
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @left: Left index of the array to search in.
 * @right: Right index of the array to search in.
 * @value: Value to search for.
 *Return: Index of the first occurrence of value,
 *or -1 if not found.
 */
int f_binary_search(int *array, int left, int right, int value)
{
int j;
if (array == NULL)
return (-1);
while (right >= left)
{
printf("Searching in array: ");
for (j = left; j < right; j++)
printf("%d, ", array[j]);
printf("%d\n", array[j]);

j = left + (right - left) / 2;
if (array[j] == value)
return (j);
if (array[j] > value)
right = j - 1;
else
left = j + 1;
}
return (-1);
}
/**
 * exponential_search - Searches for a value in a sorted array
 * using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the first occurrence of value,
 * or -1 if not found or array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
size_t i = 0;
size_t right;

if (array == NULL || size == 0)
return (-1);

if (array[0] != value)
{
for (i = 1; i < size && array[i] <= value; i = i * 2)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}

right = i < size ? i : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
return (_binary_search(array, i / 2, right, value));
}

