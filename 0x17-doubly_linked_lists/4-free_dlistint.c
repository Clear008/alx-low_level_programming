#include "lists.h"

/**
 * free_dlistint - function that frees  dlistint_t
 * @head: pointer to head of list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
