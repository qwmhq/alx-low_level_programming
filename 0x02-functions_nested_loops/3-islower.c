#include <ctype.h>
#include "main.h"

/**
 * _islower - check if given ascii value represent a lowercase letter
 * @c: the ascii value to check
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	return (!!islower(c));
}
