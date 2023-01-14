#include "hash_tables.h"

/**
 * hash_node_delete - delete a hash node
 *
 * @node: the hash node
 */
void hash_node_delete(hash_node_t *node)
{
	hash_node_t *temp;

	while (node != NULL)
	{
		free(node->key);
		free(node->value);
		temp = node->next;
		free(node);
		node = temp;
	}
}

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		hash_node_delete(ht->array[i]);
	free(ht->array);
	free(ht);
}
