#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	unsigned long int t1, t2;
	unsigned long int n;
	int i;

	t1 = 1;
	t2 = 2;

	printf("%lu, %lu, ", t1, t2);

	for (i = 3; i <= 98; i++)
	{
		n = t1 + t2;
		t1 = t2;
		t2 = n;

		printf("%lu", n);

		if (!(i == 98))
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
