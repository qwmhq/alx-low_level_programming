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
	char *s;
	unsigned int len = 0;
	list_t *new;

	if (str == NULL)
		return (NULL);

	s = strdup(str);
	while (*(s + len))
		len++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = s;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
