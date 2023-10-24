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
	listint_t *crt, *next;
	unsigned int i;

if (head == NULL || *head == NULL)

return (-1);

crt = *head;
	if (index == 0)
	{

		*head = crt->next;
		free(crt);
		return (1);
	}
i = 0;
while (i < index - 1)
{
	if (crt->next == NULL)

		return (-1);
	crt = crt->next;
	i++;
	}
	next = crt->next->next;
	free(crt->next);
	crt->next = next;
return (1);
}
