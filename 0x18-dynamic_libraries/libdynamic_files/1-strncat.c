#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate two strings, using at most
 * n bytes from the source string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to take from the source string
 * Return: a pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
