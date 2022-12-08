#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node into a dlistint_t list
 *
 * @h: the head of the list
 * @idx: the index at which to insert the new node
 * @n: the value to insert
 *
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node_before_index = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (i++ < idx - 1 && node_before_index != NULL)
		node_before_index = node_before_index->next;

	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = node_before_index;
	new_node->next = node_before_index->next;
	if (node_before_index->next)
		node_before_index->next->prev = new_node;
	node_before_index->next = new_node;

	return (new_node);
}
