#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a list_t list.
 * @head: head of linked list
 * @n: to store the new node
 * Return: the adress of new elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;
if (head == NULL)
	return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
if (*head != NULL)
{
	(*head->prev = new_node;
}
*head = new_node;

return (new_node);
}
