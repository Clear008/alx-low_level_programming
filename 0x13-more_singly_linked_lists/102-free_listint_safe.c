#include "lists"
/**
 *free_listint_safe - function that frees a listint_t list.
 *@h: a pointer.
 *Return:  the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
size_t wcount = 0;
listint_t *t;
listint_t *next;

if (h == NULL)
exit(98);
t = (*h);
while (t != NULL)
{
next = t->next;
free(t);
t = next;
wcount++;
}

*h = NULL;

return (wcount);
}
