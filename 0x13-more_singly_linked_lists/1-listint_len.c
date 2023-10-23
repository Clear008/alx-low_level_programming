#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: a pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t wcount;
wcount = 0;
while (h != NULL)
{
h = h->next;
wcount++;
}
return (wcount);
}
