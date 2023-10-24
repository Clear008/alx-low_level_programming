#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list
 * @head: a pointer
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}
listint_t *crt = *head;
listint_t *pvs = NULL;
unsigned int p = 0;
while (crt != NULL)
{
	if (p == index)
	{
		p->next = crt->next;
		free(crt);
		return (1);
	}
	p = crt;
	crt = crt->next;
	p++;
}
return (-1)
}
