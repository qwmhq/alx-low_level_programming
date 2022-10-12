#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer in an array
 * @array: the array
 * @size: size of the array
 * @cmp: pointert to function to be used to compare values
 * Return: index of the first elemnt to match by cmp, if no match, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}
	}

	return (-1);
}
