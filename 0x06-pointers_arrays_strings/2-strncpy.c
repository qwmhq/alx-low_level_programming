#include <string.h>
#include "main.h"

/**
 * _strncpy - copy n bytes from source string to destination string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
