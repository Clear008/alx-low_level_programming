#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at indexof a
 * dlistint_t linkedlist
 * @head: pointer to head of list
 * @index: index to delete
 * Return: 1 , -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crt = *head;

	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = crt->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(crt);
		return (1);
	}
	while (crt != NULL)
	{
		if (i == index)
		{
			crt->prev->next = crt->next;
			if (crt->next != NULL)
			{
				crt->next->prev = crt->prev;
			}
			free(crt);
			return (1);
		}
		i++;
		crt = crt->next;
	}
	return (-1);
}
