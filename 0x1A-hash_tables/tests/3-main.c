#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned int i, index;
	hash_node_t *ptr;
	char *keys[] = {"name", "school", "level"};
	char *values[] = {"quwam", "futa", "300L"};

	/*test key creation*/
	ht = hash_table_create(1024);
	for (i = 0; i < 3; i++)
		hash_table_set(ht, keys[i], values[i]);

	for (i = 0; i < 3; i++)
	{
		index = key_index((const unsigned char *)keys[i], ht->size);
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (strcmp(keys[i], ptr->key) == 0)
			{
				printf("%s: %s\n", keys[i], ptr->value);
			}
			ptr = ptr->next;
		}
	}

	/*test key update*/
	printf("----------\n");
	hash_table_set(ht, keys[2], "400L");
	hash_table_set(ht, keys[0], "fehintola");
	for (i = 0; i < 3; i++)
	{
		index = key_index((const unsigned char *)keys[i], ht->size);
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (strcmp(keys[i], ptr->key) == 0)
			{
				printf("%s: %s\n", keys[i], ptr->value);
			}
			ptr = ptr->next;
		}
	}

	/*test for collisions*/
	printf("----------\n");
	hash_table_set(ht, "heliotropes", "collision1");
	hash_table_set(ht, "neurospora", "collision2");
	index = key_index((const unsigned char *)"heliotropes", ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		printf("%s: %s\n", ptr->key, ptr->value);
		ptr = ptr->next;
	}

	return (EXIT_SUCCESS);
}
