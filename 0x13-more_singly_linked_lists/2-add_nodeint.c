#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of a listint_t
 *
 * @head: head of the list
 * @n: the value to add at the head
 * Return: address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
