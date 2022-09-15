#include "main.h"

/**
 * print_diagonal - print diagonal lines using '\'
 * @n: the number of times to print '\'
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j, s;

	s = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= s; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		s++;
	}
}
