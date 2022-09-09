#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Return: int
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	printf("Last digit of %d is %d and is ", n, l);

	if (l == 0)
		printf("0");
	else if (l > 5)
		printf("greater than 5");
	else
		printf("less than 6 and not 0");

	printf("\n");

	return (0);
}
