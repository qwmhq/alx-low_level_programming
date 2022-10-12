#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if succesful. on error, 98, 99 or 100
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));
	op = *(argv + 2);
	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0) && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));

	return (0);
}
