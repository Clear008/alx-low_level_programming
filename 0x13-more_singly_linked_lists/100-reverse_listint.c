#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: a pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *l_node = NULL;
listint_t *next;

while (*head != NULL)
{

next = (*head)->next;
(*head)->next = l_node;

l_node = (*head);
(*head) = next;
}
*head = l_node;
return (*head);
}
