#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (!(n % 3) && !(n % 5))
			printf("FizzBuzz");
		else if (!(n % 3))
			printf("Fizz");
		else if (!(n % 5))
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
