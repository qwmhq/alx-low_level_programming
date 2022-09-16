#include <stdio.h>

/**
 * main - main function
 * Return: void
 */
int main(void)
{
	long int n;
	long int i;

	n = 612852475143;
	i = 2;

	while ((i * i) < n)
	{
		while ((n % i) == 0)
		{
			n /= i;
		}
		i += 1;
	}

	printf("%ld\n", n);

	return (0);
}
