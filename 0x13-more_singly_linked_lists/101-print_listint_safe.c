#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: a pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t  wcount = 0;
const listint_t *t = head;

while (t != NULL)
{
printf("[%p] %d\n", (void *)t, t->n);

t = t->next;
wcount++;
}
return (wcount);
}
