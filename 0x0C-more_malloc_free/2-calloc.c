#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of array members
 * @size: size of each array member
 * Return: pointer to the allocated memory, or NULL if unsuccessful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	/*unsigned int i;*/

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, nmemb * size);

	return (arr);
}
