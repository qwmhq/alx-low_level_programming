#include <ctype.h>

/**
 * _isupper - check if a given ascii value represents an uppercase
 * @c: the value to check
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	return (!!(isupper(c)));
}
