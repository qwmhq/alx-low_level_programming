#include <stdio.h>

/**
 * main - main function
 * Return: int
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a >= b)
				continue;
			putchar((char)a);
			putchar((char)b);
			if ((a == '8') && (b == '9'))
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
