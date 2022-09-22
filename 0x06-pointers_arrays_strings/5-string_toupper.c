#include <string.h>
#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: the string
 * Return: void
 */
char *string_toupper(char *s)
{
	char *t;

	for (t = s; t < (s + strlen(s)); t++)
	{
		if (*t >= 'a' && *t <= 'z')
		{
			*t -= 32;
		}
	}
	return (s);
}
