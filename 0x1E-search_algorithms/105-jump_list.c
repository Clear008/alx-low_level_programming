#include "search_algos.h"
/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 * @list: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t index = 0, n = 0, c;
listint_t *prv;

if (list == NULL || size == 0)
return (NULL);

c = (size_t)sqrt((double)size);
do {
prv = list;
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

for (; prv && prev->index <= list->index; prv = prev->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
if (prev->n == value)
return (prv);
}
return (NULL);
}

