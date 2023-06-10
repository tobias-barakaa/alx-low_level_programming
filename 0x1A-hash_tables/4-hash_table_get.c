#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
if (node == NULL)
{
return (NULL);
}
while (strcmp(node->key, key) && node != NULL)
{
node = node->next;
}
if (node == NULL)
{
return (NULL);
}
else
{
return (node->value);
}
}
