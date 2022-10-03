#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars, and initialize it with c
 * @size: the size of the array
 * @c: the char to initialize the array with
 * Return: pointer to the array, or NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(c));

	if (arr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
