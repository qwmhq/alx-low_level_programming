#include "lists.h"

/**
 * free_listint2 - free a listint_t and sets head to NULL
 *
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	if (head)
	{
		curr = *head;
		while (curr)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
