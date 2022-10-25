#include "lists.h"

/**
 * free_listint - free a listint_t
 *
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
