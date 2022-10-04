#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to newly allocated memory containing
 * the contents of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len_s1, len_s2, length;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	length = len_s1 + len_s2 + 1;

	str = malloc((length) * sizeof(char));

	if (str == NULL)
		return (str);

	for (i = 0; i < length - 1; i++)
	{
		if (i < len_s1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len_s1];
	}

	str[length - 1] = '\0';

	return (str);
}
