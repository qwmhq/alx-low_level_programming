#include "lists.h"

/**
 * free_listint2 - free a listint_t and sets head to NULL
 *
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
