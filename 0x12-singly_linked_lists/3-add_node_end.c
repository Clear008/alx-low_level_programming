#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end
 * @head: head of linked list
 * @str: string
 * Return: the adress of new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tempo;
list_t *new_node;
int inx, acount = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
for (inx = 0; str[inx] != '\0'; inx++)
acount++;
new_node->len = inx;
new_node->str = strdup(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}


tempo = *head;
while (tempo->next != NULL)
	tempo = tempo->next;
tempo->next = new_node;
return (new_node);
}
