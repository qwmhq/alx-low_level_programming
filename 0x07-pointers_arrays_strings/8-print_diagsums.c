#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the two
 * diagonals of a square matrix of integers
 * @a: 2d array representing the matrix
 * @size: the size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diag1sum, diag2sum;
	int *ptr1, *ptr2;
	int i;

	diag1sum = 0;
	diag2sum = 0;
	ptr1 = a;
	ptr2 = a + size - 1;

	for (i = 0; i < size; i++)
	{
		diag1sum += *ptr1;
		diag2sum += *ptr2;

		ptr1 += (size + 1);
		ptr2 += (size - 1);
	}

	printf("%d, %d\n", diag1sum, diag2sum);
}
