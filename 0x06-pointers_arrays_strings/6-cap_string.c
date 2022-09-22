#include <string.h>
#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: the string
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *s)
{
	char *t;

	for (t = s; t < (s + strlen(s)); t++)
	{
		if (*t >= 'a' && *t <= 'z')
		{
			char *p;

			if (t == s)
			{
				*t -= 32;
				continue;
			}
			p = t - 1;
			if (*p == ' '
					|| *p == '\t'
					|| *p == '\n'
					|| *p == ','
					|| *p == ';'
					|| *p == '.'
					|| *p == '!'
					|| *p == '?'
					|| *p == '"'
					|| *p == '('
					|| *p == ')'
					|| *p == '{'
					|| *p == '}')
				*t -= 32;
		}
	}
	return (s);
}
