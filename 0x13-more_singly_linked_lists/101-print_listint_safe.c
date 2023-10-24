#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: a pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t  wcount = 0;

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);

head = head->next;
wcount++;
}
return (wcount);
}
/**
 * c_node - function to creat new node
 * @m: an integer
 * Return: new node
 */
listint_t *c_node(int m)
{
listint_t *nw_node = malloc(sizeof(listint_t));
if (nw_node == NULL)
{
exit(98);
}
nw_node->n = m;
nw_node->next = NULL;
return (nw_node);
}
