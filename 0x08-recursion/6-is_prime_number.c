#include "main.h"

/**
 * is_prime - helper function for is_prime_number
 * @n: number
 * @d: divisor
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime(int n, int d)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (!(n % d))
		return (0);
	if (d * d > n)
		return (1);

	return (is_prime(n, d + 1));
}

/**
 * is_prime_number - check if an integer is a prime number
 * @n: the number
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
