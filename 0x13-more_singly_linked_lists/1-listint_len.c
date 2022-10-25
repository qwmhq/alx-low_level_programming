#include "lists.h"

/**
 * listint_len - find the number of elements in a listint_t
 *
 * @h: listint_t
 * Return: the number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	listint_t *p = (listint_t *)h;
	size_t size = 0;

	while (p)
	{
		size++;
		p = p->next;
	}
	return (size);
}
