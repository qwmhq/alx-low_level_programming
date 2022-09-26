#include <string.h>
#include "main.h"

/**
 * _strpbrk - locate the first occurence in the string s
 * of any of the bytes in the string accept
 * @s: pointer to s
 * @accept: pointer to accept
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
