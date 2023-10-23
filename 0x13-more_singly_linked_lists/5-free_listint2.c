#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: a pointer
 */
void free_listint2(listint_t **head)
{
listint_t *t;
if (head == NULL)
	return;
while (*head != NULL)
{
t = *head;
*head = (*head)->next;

free(t);
}
}
