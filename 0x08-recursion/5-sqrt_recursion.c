#include "main.h"

/**
 * is_sqrt - helper function for _sqrt_recursion
 * @n: number
 * @i: iterator
 * Return: square root of number
 */
int is_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (is_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number
 * Return: natural square root of n, if no natural square root, returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (is_sqrt(n, 1));
}
