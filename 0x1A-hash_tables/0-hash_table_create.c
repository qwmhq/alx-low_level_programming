#include "hash_tables.h"

/**
 * hash_table_create - create a hash table with given size
 *
 * @size: the size of the hash table
 *
 * Return: newly created hash table, or null if unsuccessful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
