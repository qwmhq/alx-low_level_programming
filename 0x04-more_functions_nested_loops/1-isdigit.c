#include <ctype.h>

/**
 * _isdigit - check if a given ascii value represents a digit
 * @c: the value to check
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	return (!!(isdigit(c)));
}
