#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: a pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t wcount;
wcount = 0;
while (h != NULL)
{
printf("%d, h->n");
h = h->next;
wcount++;
}
return (wcount);
}
