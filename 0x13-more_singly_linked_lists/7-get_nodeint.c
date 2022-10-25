#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t
 *
 * @head: head of the list
 * @index: the index of the node to get
 * Return: the node at index, or NULL, if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;

	while (p && index--)
	{
		p = p->next;
	}
	return (p);
}
