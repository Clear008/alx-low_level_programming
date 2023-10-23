#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: a pointer
 */
void free_listint2(listint_t **head)
{
listint_t *crt;
listint_t *next;
*crt = *head;
while (crt != NULL)
{
next = crt->next;
free(crt);
crt = next;
}
*head = NULL;
}
