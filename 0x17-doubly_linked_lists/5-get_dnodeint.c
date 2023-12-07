#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index
 * Return: nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *crt = head;
	unsigned int i = 0;

	while (crt != NULL)
	{
		if (i == index)
		{
			return (crt);
		}
		i++;
		crt = crt->next;
	}
	return (NULL);
}
