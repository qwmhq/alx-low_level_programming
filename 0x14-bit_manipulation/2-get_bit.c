#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 *
 * @n: the number
 * @index: the bit index
 * Return: value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
