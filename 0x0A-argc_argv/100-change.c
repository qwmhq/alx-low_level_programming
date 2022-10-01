#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;
	int amount;
	int number_of_coins;
	int coins[] = {25, 10, 5, 2, 1};

	amount = atoi(argv[1]);
	number_of_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		number_of_coins += (amount / coins[i]);
		amount %= coins[i];
	}

	printf("%d\n", number_of_coins);
	return (0);
}
