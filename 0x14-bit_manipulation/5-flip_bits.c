#include "main.h"

/**
 * flip_bits - get the number of bits to be flipped
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 * Return: number of bits different in n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int flips = 0;

	while (i)
	{
		flips += (i & 1);
		i >>= 1;
	}
	return (flips);
}
