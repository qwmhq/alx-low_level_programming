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

	for (a = '0'; a < '8'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if ((a >= b) || (b >= c))
					continue;
				putchar((char)a);
				putchar((char)b);
				putchar((char)c);
				if ((a == '7') && (b == '8') && (c == '9'))
					continue;
				putchar(',');
				putchar(' ');

			}
		}
	}

	putchar('\n');

	return (0);
}
