#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node from a dlistint_t
 *
 * @head: the head of the list
 * @index: the index at which to delete
 *
 * Return: 1 if successful, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i++ < index && node != NULL)
		node = node->next;
	if (i != index + 1)
		return (-1);

	if (i == 1)
		*head = node->next;
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);

	return (1);
}
