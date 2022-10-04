#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create a 2d array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (arr);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i--]);
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
