#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenate arguments
 * @ac: argument count
 * @av: array containing the arguments
 * Return: pointer to the string containing concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t	j;
	size_t total_count, prev_count;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_count = 1;

	for (i = 0; i < ac; i++)
	{
		total_count += strlen(av[i]) + 1;
	}

	args = malloc(total_count * sizeof(char));
	prev_count = 0;

	for (i = 0; i < ac; i++)
	{
		size_t char_count = strlen(av[i]);

		for (j = 0; j <= char_count; j++)
		{
			if (j == char_count)
				args[j + prev_count] = '\n';
			else
				args[j + prev_count] = av[i][j];
		}
		prev_count += char_count + 1;
	}

	return (args);
}
