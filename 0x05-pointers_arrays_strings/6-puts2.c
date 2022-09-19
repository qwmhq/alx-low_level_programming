#include <string.h>
#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
