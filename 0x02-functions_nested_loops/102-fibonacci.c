#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	long int t1, t2;
	long int n;
	int i;

	t1 = 1;
	t2 = 2;

	printf("%ld, %ld, ", t1, t2);

	for (i = 3; i <= 50; i++)
	{
		n = t1 + t2;
		t1 = t2;
		t2 = n;

		printf("%ld", n);

		if (!(i == 50))
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
