#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((!(i % 3)) || (!(i % 5)))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
