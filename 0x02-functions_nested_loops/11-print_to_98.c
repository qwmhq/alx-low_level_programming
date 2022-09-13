#include <stdio.h>

/**
 * print_to_98 - print from given number to 98
 * @n: the number to print from
 * Return: void
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
		i = 1;
	else if (n > 98)
		i = -1;
	else
		i = 0;

	for (j = n; j != 98; j += i)
	{
		printf("%d, ", j);
	}

	printf("98\n");
}
