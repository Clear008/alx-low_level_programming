#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key to add or update
 * @value: The value associated with the key (duplicated)
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int indx;
hash_node_t *new_n, *tempo;

if (ht == NULL || key == NULL || *key == '\0')
return (0);
indx = hash_djb2((unsigned char *)key) % ht->size;
tempo = ht->array[indx];
while (tempo != NULL)
{
if (strcmp(tempo->key, key) == 0)
{
free(tempo->value);
tempo->value = strdup(value);
if (tempo->value == NULL)
return (0);
return (1);
}
tempo = tempo->next;
}
new_n = malloc(sizeof(hash_node_t));
if (new_n == NULL)
return (0);
new_n->key = strdup(key);
new_n->value = strdup(value);

if (new_n->key == NULL || new_n->value == NULL)
{
free(new_n->key);
free(new_n->value);
free(new_n);
return (0);
}

new_node->next = ht->array[indx];
ht->array[indx] = new_node;
return (1);
}

