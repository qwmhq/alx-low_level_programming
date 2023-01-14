#include "hash_tables.h"

/**
 * hash_table_print - print the contents of a hash table
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_item_printed = 0;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			printf("%s'%s': '%s'",
					first_item_printed ? ", " : "",
					ptr->key,
					ptr->value);
			if (!first_item_printed)
				first_item_printed = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
