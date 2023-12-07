#include "lists.h"

/**
 * insert_dnodeint_at_index - function that
 * inserts a new node at a given position
 * @h: pointer to head of list
 * @n: new node to add
 * @idx: index
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *crt;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	crt = get_dnodeint_at_index(*h, idx);

	if (crt == NULL)
	{
		return (NULL);
	}
	if (crt->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = crt;
	new_node->next = crt->next;
	crt->next->prev = new_node;
	crt->next = new_node;
	return (new_node);
}
