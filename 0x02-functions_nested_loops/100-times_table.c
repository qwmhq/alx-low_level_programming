#include "main.h"

/**
 * print_times_table - print times table up to given number
 * @n: the number (0 <= n <= 15)
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, m;

	if ((n > 15) || (n < 0))
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		if (n == 0)
			return;
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= n; j++)
		{
			m = i * j;
			if (m <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m <= 99)
			{
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar((m / 100) + '0');
				_putchar(((m / 10) % 10) + '0');
				_putchar((m % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
