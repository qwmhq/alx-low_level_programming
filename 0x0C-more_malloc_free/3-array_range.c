#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - create an array of a range of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: pointer to the created array, or NULL if unsuccessful
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = min + i;

	return (arr);
}
