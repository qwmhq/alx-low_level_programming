#include <stdio.h>

/**
 * main - main function
 * Return: int
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar((char)a);


		if (!(a == '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
