#include <string.h>
#include "main.h"

/**
 * _strspn - get the length of the initial segment of s
 * which consists entirely of bytes in accept
 * @s: the string to check
 * @accept: the string to check against
 * Return: the number of bytes int the initial segment of s
 * which consist of only bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
