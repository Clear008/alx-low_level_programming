#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t wcount = 0;
while (h != NULL)

{
	wcount++;
	h = h->next;
}
return (wcount);
}
