#include "hash_tables.h"

/**
 * hash_table_set - add an element to a hash table
 *
 * @ht: the hash table
 * @key: the key to add
 * @value: the value to be associated with key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *key_copy, *value_copy;
	hash_node_t *node, *ptr;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	key_copy = strdup(key);
	value_copy = strdup(value);
	if (key_copy == NULL || value_copy == NULL)
		return (0);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key_copy) == 0)
		{
			free(ptr->value);
			ptr->value = value_copy;
			return (1);
		}
		ptr = ptr->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = key_copy;
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
