#include "lists.h"

/**
 * find_first_loop_node - find the first node of a loop in a listint_t
 *
 * @head: the head of the list
 * Return: the first node of a loop, if it exists, otherwise null
 */
listint_t *find_first_loop_node(listint_t *head)
{
	listint_t *fastptr = head, *slowptr = head;
	int loop = 0;

	while (fastptr && fastptr->next)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
		if (fastptr == slowptr)
		{
			loop = 1;
			break;
		}
	}

	if (loop)
	{
		slowptr = head;
		while (slowptr)
		{
			if (slowptr == fastptr)
				return (slowptr);
			slowptr = slowptr->next;
			fastptr = fastptr->next;
		}
	}
	return (NULL);
}

/**
 * print_listint_safe - print a list_t
 *
 * @head: head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int size, looped = 0;
	listint_t *first_loop_node;

	first_loop_node = find_first_loop_node((listint_t *)head);
	while (head)
	{
		if (head == first_loop_node)
		{
			if (!looped)
				looped = 1;
			else
				break;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		size++;
		head = head->next;
	}
	if (first_loop_node)
		printf("-> [%p] %d\n", (void *)first_loop_node, first_loop_node->n);
	return (size);
}
