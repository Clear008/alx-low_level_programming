#include "search_algos.h"
/**
 * f_recurtion_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: index of the number
 */
int f_recurtion_search(int *array, size_t size, int value)
{
size_t half = size / 2;
size_t index;

if (array == NULL || size == 0)
return (-1);

printf("Searching in array");

for (index = 0; index < size; index++)
printf("%s %d", (index == 0) ? ":" : ",", array[index]);

printf("\n");

if (half && size % 2 == 0)
half--;

if (value == array[half])
{
if (half > 0)
return (rec_search(array, half + 1, value));
return ((int)half);
}
if (value < array[half])
return (rec_search(array, half + 1, value));
half++;
return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 * @array:a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
int i;

i = f_recurtion_search(array, size, value);
if (i >= 0 && array[i] != value)
return (-1);

return (i);
}

