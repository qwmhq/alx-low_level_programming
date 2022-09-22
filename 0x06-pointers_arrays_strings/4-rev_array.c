#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p1, *p2;

	p1 = a;
	p2 = a + n - 1;

	while (p1 <= p2)
	{
		int i;

		i = *p1;
		*p1 = *p2;
		*p2 = i;

		p1++;
		p2--;
	}
}
