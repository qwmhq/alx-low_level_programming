#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 *
 * @n: the number
 * @index: the index to set
 * Return: 1 if successful, -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	(*n) |= (1 << index);
	return (1);
}
