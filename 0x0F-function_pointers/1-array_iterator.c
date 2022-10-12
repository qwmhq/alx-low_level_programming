#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: the array
 * @size: size of array
 * @action: function to execute on array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size-- > 0)
		{
			action(*(array));
			array++;
		}
	}
}
