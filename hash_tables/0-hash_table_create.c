#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = NULL;
	unsigned long int i;

	newHashTable = malloc(sizeof(hash_table_t));

	if (!newHashTable)
		return (NULL);

	newHashTable->size = size;

	newHashTable->array = malloc(sizeof(hash_node_t *) * size);

	if (!(newHashTable->array))
		return (NULL);

	for (i = 0; i < size; i++)
		(newHashTable->array)[i] = NULL;

	return (newHashTable);
}
