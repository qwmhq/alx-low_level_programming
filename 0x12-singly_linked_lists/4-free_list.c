#include "lists.h"

/**
 * free_list - free a linked list
 *
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
