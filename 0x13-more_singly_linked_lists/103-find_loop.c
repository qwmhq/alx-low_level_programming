#include "lists.h"

/**
 * find_listint_loop - find the first node of a loop in a listint_t
 *
 * @head: the head of the list
 * Return: the first node of a loop, if it exists, otherwise null
 */
listint_t *find_listint_loop(listint_t *head)
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
