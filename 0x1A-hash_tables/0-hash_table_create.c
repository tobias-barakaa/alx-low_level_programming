#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - hash-table function
 * @size - size 
 * return: return the hash-value
*/

hash_table_t *hash_table_create(unsigned long int size)
{

    hash_table_t *hash_table = NULL;
    unsigned long int i;

    /* Allocate memory for the hash table */
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    /* Allocate memory for the array of hash node pointers */
    hash_table->array = malloc(sizeof(hash_node_t *) * size);
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return NULL;
    }

    /* Initialize each array element to NULL */
    for (i = 0; i < size; i++)
        hash_table->array[i] = NULL;

    hash_table->size = size;

    return (hash_table);
}
