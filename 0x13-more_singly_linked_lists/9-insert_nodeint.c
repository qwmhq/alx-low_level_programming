#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a listint_t
 * at a given position
 *
 * @head: head of the list
 * @idx: index at which to insert the new node
 * @n: the data to be stored in the new node
 * Return: the address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_before, *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node_before = *head;
	while (node_before && (idx - 1))
	{
		node_before = node_before->next;
		idx--;
	}
	if (node_before == NULL)
		return (NULL);

	temp = node_before->next;
	node_before->next = new;
	new->next = temp;
	return (new);
}
