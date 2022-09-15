#include "main.h"

/**
 * print_triangle - print a triangle to the screen
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	s = size - 1;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= s; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		s--;
	}
}
