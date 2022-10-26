#include "lists.h"

/**
 * reverse_listint - reverse a linstint_t
 *
 * @head: the head of the list
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head && *head)
	{
		prev = NULL;
		next = NULL;
		while (*head)
		{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
		}
		*head = prev;
	}
	return (*head);
}
