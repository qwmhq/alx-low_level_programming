#include "main.h"

/**
 * print_square - print a square to the screen
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
