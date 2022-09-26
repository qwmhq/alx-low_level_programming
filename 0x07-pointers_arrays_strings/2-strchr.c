#include <string.h>
#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string to search
 * @c: the character to locate
 * Return: a pointer to the first occurence of c in s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
