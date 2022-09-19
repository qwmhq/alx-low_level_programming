#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	char *start, *end;

	start = s;
	end = s + strlen(s) - 1;

	while (start < end)
	{
		char c;

		c = *end;
		*end = *start;
		*start = c;

		start++;
		end--;
	}
}
