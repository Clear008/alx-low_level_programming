#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
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
size_t mid; 
int j;
while (left <= right)
{
mid = left + (right - left) / 2;
printf("Searching in array: ");
for (j = left; j <= right; j++)
{
printf("%d", array[j]);
if (j < right)
printf(", ");
}
printf("\n");

printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
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
size_t i = 1;
size_t left;
size_t right;

if (array == NULL || size == 0)
return (-1);

if (array[0] == value)
{
printf("Value checked array[%d] = [%d]\n", 0, array[0]);
return (0);
}
while (i < size && array[i] <= value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
i *= 2;
}
left = i / 2;
right = (i < size) ? i : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", left, right);

return (f_binary_search(array, left, right, value));
}

