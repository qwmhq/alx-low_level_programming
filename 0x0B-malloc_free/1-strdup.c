#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate a string in memory
 * @str: the string to duplicate
 * Return: pointer to the duplicate string
 */
char *_strdup(char *str)
{
	unsigned int i, str_length;
	char *dup;

	if (str == NULL)
		return (NULL);

	str_length = strlen(str);
	dup = malloc(str_length * sizeof(char) + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < str_length; i++)
	{
		*(dup + i) = *(str + i);
	}

	return (dup);
}
