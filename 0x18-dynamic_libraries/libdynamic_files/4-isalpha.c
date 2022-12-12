#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if a character is alphabetic
 * @c: the character to check
 * Return: 1 if alphabetic, otherwise 0
 */
int _isalpha(int c)
{
	return (!!isalpha(c));
}
