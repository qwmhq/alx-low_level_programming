#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array containing the arguments
 * Return: always 0
 */
int main(int argc __attribute__((__unused__)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
