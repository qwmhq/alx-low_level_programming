#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	long int t1, t2;
	long int n;
	long int sum;
	long int limit;

	t1 = 1;
	t2 = 2;

	sum = 0;
	limit = 4000000;

	while (t2 <= limit)
	{
		if (!(t2 % 2))
			sum += t2;
		n = t1 + t2;
		t1 = t2;
		t2 = n;
	}

	printf("%ld\n", sum);

	return (0);
}
