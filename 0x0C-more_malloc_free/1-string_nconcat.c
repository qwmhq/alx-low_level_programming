#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to take from s2
 * Return: pointer to concatenated string, or NULL if unsuccessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	size_t i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	size = strlen(s1) + n + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < size; i++)
	{
		if (i < strlen(s1))
			*(s + i) = *(s1 + i);
		else
			*(s + i) = *(s2 + j++);
	}
	s[size - 1] = '\0';
	return (s);
}
