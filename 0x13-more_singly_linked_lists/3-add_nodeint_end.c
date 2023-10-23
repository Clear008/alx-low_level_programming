#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: head of linked list
 * @n: integer
 * Return: the adress of new elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw_node, *tempo;
if (head == NULL)
return (NULL);

nw_node = malloc(sizeof(listint_t));

if (nw_node == NULL)
return (NULL);

nw_node->n = n;
nw_node->next = NULL;
if (*head == NULL)
{
*head = nw_node;
return (nw_node);
}
tempo = *head;
while (tempo->next != NULL)
tempo = tempo->next;
tempo->next = nw_node;
return (nw_node);
}
