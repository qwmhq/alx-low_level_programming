#include <string.h>
#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: the string
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	size_t i, j;
	char *keys = "aAeEoOtTlL";
	char *values = "4433007711";

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(keys); j++)
		{
			if (s[i] == keys[j])
			{
				s[i] = values[j];
				break;
			}
		}
	}
	return (s);
}
