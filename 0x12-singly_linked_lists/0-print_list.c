#include <stdio.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int wcount = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
wcount++;
}
return (wcount);
}
