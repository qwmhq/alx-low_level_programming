#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t,
 * and return the head node's data
 *
 * @head: head node
 * Return: head node's data, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
