#include "lists.h"
/**
 * free_listint - function that frees a list_t list.
 * @head: a pointer
 */
void free_listint(listint_t *head)
{
	listint_t *t;
while (head != NULL)
{
	t = head;
	head = head->next;
	free(t);
}
}
