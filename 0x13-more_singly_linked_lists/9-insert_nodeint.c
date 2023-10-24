#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: a pointer
 * @idx: index of the list.
 * @n:integer to add to the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw_node;
	unsigned int p = 0;
	listint_t *t = *head;

nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
	{
		return (NULL);
	}
nw_node->n = n;
if (idx == 0)
{
	nw_node->next = *head;
	*head = nw_node;
	return (nw_mode);
}

while (t != NULL)
{
	if (p == idx - p)
	{
		nw_node->next = t->next;
		t->next = nw_node;
		return (nw_node);
	}
	t = t->next;
	p++;
}
return (NULL);
}
