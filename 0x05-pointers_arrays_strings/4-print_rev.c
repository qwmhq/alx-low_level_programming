#include <string.h>
#include "main.h"

/**
 * print_rev - reverse a string
 * @s: the string to reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
