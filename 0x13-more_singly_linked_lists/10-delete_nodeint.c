#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at an index of a listint_t
 *
 * @head: head of the list
 * @index: the index at which to delete
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_before, *temp;

	if (head && *head)
	{
		if (index == 0)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
			return (1);
		}
		node_before = *head;
		while (node_before && (index - 1))
		{
			node_before = node_before->next;
			index--;
		}
		if (node_before == NULL || node_before->next == NULL)
			return (-1);
		temp = node_before->next;
		node_before->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
