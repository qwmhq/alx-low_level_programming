#include <string.h>
#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	size_t i;
	size_t len;

	len = strlen(str);

	i = (len / 2) + (len % 2);

	for (; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
