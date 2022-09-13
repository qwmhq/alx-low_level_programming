#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			m = i * j;
			if (m <= 9)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
