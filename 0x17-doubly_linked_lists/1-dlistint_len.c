#include "lists.h"

/**
 * dlistint_len - find the number of elements in a linked dlistint_t list
 *
 * @h: the head of the list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
