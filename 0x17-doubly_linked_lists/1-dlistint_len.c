#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - function that returns the number of elements in a linked
 * @h: pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t wcount = 0;
while (h != NULL)

{
	wcount++;
	h = h->next;
}
return (wcount);
}
