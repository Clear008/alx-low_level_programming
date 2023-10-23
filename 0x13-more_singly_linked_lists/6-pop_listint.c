#include "lists.h"
/**
 * pop_listint - function that  that deletes the head node
 * @head: a pointer
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
if (head == NULL || *head == NULL)
{
return (0);
}
int v;
listint_t *t = *head;
v = (*head)->n;

*head = (*head)->next;
free(t);
return (v);
}
