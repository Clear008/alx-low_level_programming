#include "lists.h"
/**
 * get_nodeint_at_index - unction that returns the nth node
 * @head: a pointer
 * @index: index of the node
 *Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
while (head != NULL)
{
	if (n == index)
	{
		return (head);
	}
head = head->next;
n++;
}
return (NULL);
}
