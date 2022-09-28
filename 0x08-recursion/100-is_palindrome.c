#include <string.h>
#include "main.h"

/**
 * palindrome - helper function for is_palindrome
 * @p1: pointer to the first character
 * @p2: pointer to the last character
 * Return: 1 if palindrome, otherwise 0
 */
int palindrome(char *p1, char *p2)
{
	if (p1 >= p2)
		return (1);
	if (*p1 != *p2)
		return (0);
	return (palindrome(p1 + 1, p2 - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	char *p;

	p = s + strlen(s) - 1;

	return (palindrome(s, p));
}
