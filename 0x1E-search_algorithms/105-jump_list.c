#include "search_algos.h"

/**
 * jump_list - searches for a value in a singly linked list using
 * the Jump search algorithm
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
do {
prev = list;
n++;
index = n *c;

while (list->next && list->index < index)
list = list->next;

if (list->next == NULL && index != list->index)
index = list->index;

printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

} while (index < size && list->next && list->n < value);
printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);
for (; prev && prev->index <= list->index; prev = prev->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
if (prev->n == value)
return (prev);
}

return (NULL);
}

