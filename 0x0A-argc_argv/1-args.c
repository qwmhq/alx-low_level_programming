#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char **argv __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
