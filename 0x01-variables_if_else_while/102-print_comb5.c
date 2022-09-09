#include <stdio.h>

/**
 * main - main function
 * Return: int
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if ((a > c) || ((a == c) && (b >= d)))
						continue;
					putchar((char)a);
					putchar((char)b);
					putchar(' ');
					putchar((char)c);
					putchar((char)d);
					if ((a == '9') && (b == '8') && (c == '9') && (d == '9'))
						continue;
					putchar(',');
					putchar(' ');

				}
			}
		}
	}

	putchar('\n');

	return (0);
}
