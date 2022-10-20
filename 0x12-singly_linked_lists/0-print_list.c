#include "lists.h"

/**
 * print_list - print all elements of a list_t list
 *
 * @h: the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *p = (list_t *)h;
	size_t size = 0;

	while (p)
	{
		printf("[%u] %s\n", p->len, p->str ? p->str : "(nil)");
		size++;
		p = p->next;
	}
	return (size);
}
