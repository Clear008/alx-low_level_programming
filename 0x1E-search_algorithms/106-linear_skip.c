#include "search_algos.h"
/**
 * linear_skip - searches for a value in an array of
 * integers using the linear search algorithm
 * @list: a pointer to the first element of the array to search in
 * @value: value to search for
 * Return: index of the number

 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *pr;
if (list == NULL)
return (NULL);
pr = list;

do {
list = pr;
pr = go->express;
printf("Value checked at index ");
printf("[%d] = [%d]\n", (int)go->index, go->n);
} while (go->express && pr->n < value);

if (go->express == NULL)
{
list = pr;
while (go->next)
pr = go->next;
}

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)list->index, (int)go->index);

while (list != go->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
if (list->n == value)
return (list);
list = list->next;
}

return (NULL);
}

