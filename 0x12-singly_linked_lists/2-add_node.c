#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @str: string
 * Return: the adress of new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	int inx, acount = 0;
	list_t *new_node;
if (head == NULL)
	return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
for (inx = 0; str[inx] != '\0'; inx++)
acount++;
new_node->len = i;
new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
