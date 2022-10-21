#include "lists.h"

/**
 * add_node - add a node to the head of a list
 *
 * @head: list head
 * @str: string value
 * Return: pointer to new head node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int len = 0;
	list_t *new;

	dup = strdup(str);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (*(dup + len))
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
