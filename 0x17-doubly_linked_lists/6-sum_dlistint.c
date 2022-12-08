#include "lists.h"

/**
 * sum_dlistint - sum all elements in a dlistint_t list
 *
 * @head: the head of the list
 *
 * Return: the sum of all elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
