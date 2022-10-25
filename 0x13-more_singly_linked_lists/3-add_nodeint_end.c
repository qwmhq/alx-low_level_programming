#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a listint_t
 *
 * @head: head of the list
 * @n: value to add at the end
 * Return: address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = *head, *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}
