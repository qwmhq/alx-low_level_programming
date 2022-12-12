#include <string.h>
#include "main.h"

/**
 * _memcpy - copy n bytes from src memory area to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
