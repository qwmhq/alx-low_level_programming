#include "lists.h"

/**
 * add_node_end - add a new node to the end of a list
 *
 * @head: head node
 * @str: string value
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (*(str + len))
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
