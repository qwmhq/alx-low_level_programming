#include "lists.h"

/**
 * add_dnodeint - add a new node to the beginning of a dlistint_t list
 *
 * @head: the head of the list
 * @n: the value to add to the list
 *
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
