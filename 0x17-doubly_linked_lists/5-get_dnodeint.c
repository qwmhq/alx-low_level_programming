#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t list
 *
 * @head: the head of the list
 * @index: the index
 *
 * Return: the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
