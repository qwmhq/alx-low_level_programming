#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_number - check if a string represents a number
 * @str: the string
 * Return: 1 if str is a number, otherwise 0
 */
int is_number(char *str)
{
	return (strspn(str, "1234567890") == strlen(str));
}

/**
 * main - program entry
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	long n1, n2, result;

	if (argc != 3 || !is_number(*(argv + 1)) || !is_number(*(argv + 2)))
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoll(*(argv + 1));
	n2 = atoll(*(argv + 2));
	result = n1 * n2;

	printf("%ld\n", result);

	return (0);
}
