#include "lists.h"
/**
 * free_listint - function that frees a list_t list.
 * @head: a pointer
 */
void free_listint(listint_t *head)
{
if (head->next != NULL)
{
free_listint(head->next);
}
free(head);
}
