#include "hash_tables.h"

/**
 * key_index = function to find index
 * @size: size
 * Return: retur value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return(hash_djb2(key) % size);
}
