#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i, no_of_bytes;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_of_bytes = atoi(*(argv + 1));
	p = (unsigned char *) main;

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < no_of_bytes; i++)
	{
		if (i < no_of_bytes - 1)
			printf("%02x ", *(p + i));
		else
			printf("%02x\n", *(p + i));
	}

	return (0);
}
