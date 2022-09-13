#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	char h1, h2, m1, m2;

	for (h1 = '0'; h1 <= '2'; h1++)
	{
		for (h2 = '0'; h2 <= '9'; h2++)
		{
			for (m1 = '0'; m1 <= '5'; m1++)
			{
				if ((h1 == '2') && (h2 == '4'))
					return;
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');

				}
			}
		}
	}
}
