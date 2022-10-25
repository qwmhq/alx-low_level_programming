#include "lists.h"

/**
 * sum_listint - sum all the data in a listint_t
 *
 * @head: head of the list
 * Return: sum of all data in the list. 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
