#include "search_algos.h"

/**
 * jump_list - searches for a value in a singly linked list using
 *             the Jump search algorithm
 * @list: pointer to the head of the linked list
 * @size: number of elements in the linked list
 * @value: value to search for
 * Return: pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t index = 0, n = 0, c;
listint_t *prev;

if (list == NULL || size == 0)
return (NULL);
c = (size_t)sqrt((double)size);
while (list->next && list->n < value)
{
prev = list;
n++;
index = n * c;

while (list->next && list->index < index)
list = list->next;

printf("Value checked at index [%lu] = [%d]\n", index, list->n);
}
printf("Value found between indexes ");
printf("[%lu] and [%lu]\n", prev->index, list->index);

while (prev && prev->index <= list->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
return (prev);
prev = prev->next;
}
return (NULL);
}

