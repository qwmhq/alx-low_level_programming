#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	char *c;
	
	c = s;

	while (c < (s + strlen(s) - 1))
	{
		if ((*c >= '0' && *c <= '9'))
		{
			if (*(c - 1) == '-')
			{
				return (-(atoi(c)));
			}
			return (atoi(c));
		}
		c++;
	}
	return (0);
}
