#include "main.h"

/**
 * string_length - find the length of a string
 *
 * @str: pointer to the string
 * Return: length of str
 */
int string_length(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if there is a problem
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	len = string_length((char *)b);
	while (i < len)
	{
		if (b[i] == '1')
			n |= (1 << (len - i - 1));
		else if (b[i] == '0')
			n &= ~(1 << (len - i - 1));
		else
			return (0);
		i++;
	}
	return (n);
}
