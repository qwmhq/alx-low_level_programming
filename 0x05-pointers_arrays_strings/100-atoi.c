#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	char *c;
	int minuscount;

	c = s;
	minuscount = 0;

	while (c < (s + strlen(s)))
	{
		if (*c == '-')
		{
			minuscount++;
		}
		if ((*c >= '0' && *c <= '9'))
		{
			if (minuscount % 2)
			{
				_putchar('-');
			}
			return (atoi(c));
		}
		c++;
	}
	return (0);
}
