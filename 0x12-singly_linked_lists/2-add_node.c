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

	dup = (str == NULL) ? NULL : strdup(str);
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(dup);
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
