#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 *
 * @h: listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *p = (listint_t *)h;
	size_t size = 0;

	while (p)
	{
		printf("%d\n", p->n);
		size++;
		p = p->next;
	}
	return (size);
}
