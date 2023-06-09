#include "hash_tables.h"

/**
 * hash_table_create - hash-table function
 * @size: size
 * Return: return the hash-value
 *
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

hash_table_t *hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);
hash_table->size = size;
hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (hash_table->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
hash_table->array[i] = NULL;
hash_table->size = size;
return (hash_table);
}
