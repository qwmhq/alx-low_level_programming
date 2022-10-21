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
	unsigned int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (*(str + len))
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
