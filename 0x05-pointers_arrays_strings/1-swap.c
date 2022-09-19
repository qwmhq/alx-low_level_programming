#include "main.h"

/**
 * swap_int - swap two integers
 * @a: the pointer to the first integer
 * @b: the pointer to the second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
