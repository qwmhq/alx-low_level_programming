#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of a dlistint_t list
 *
 * @head: the head of the list
 * @n: the value to add to the list
 *
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;

	while (ptr && ptr->next)
		ptr = ptr->next;
	if (ptr)
	{
		ptr->next = new_node;
		new_node->prev = ptr;
	}
	else
		*head = new_node;

	return (new_node);
}
