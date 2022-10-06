#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * min - find the minimum of two integers
 * @n1: integer 1
 * @n2: integer 2
 * Return: minimum of n1 and n2
 */
int min(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to the memory block
 * @old_size: size of the block
 * @new_size: size after reallocation
 * Return: pointer to reallocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		new_ptr = malloc(new_size);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, min(old_size, new_size));

	return (new_ptr);
}
