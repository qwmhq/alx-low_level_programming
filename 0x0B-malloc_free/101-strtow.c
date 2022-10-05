#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * count_words - count the words in a string
 * @str: pointer to the string
 * Return: number of words in the string
 */
int count_words(char *str)
{
	int count;
	size_t i;

	count = 0;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
	}
	return (count);
}

/**
 * count_char - count the characters before the first occurence of space
 * @str: pointer to the string
 * Return: number of chars before space
 */
int count_char(char *str)
{
	int count;

	count = 0;

	while (1)
	{
		if (*(str) == ' ' || *(str) == '\0')
			break;
		count++;
		str++;
	}
	return (count);
}

/**
 * strtow - split a string into words
 * @str: pointer to the string
 * Return: pointer to array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int j, word_count, word_index;
	size_t i;

	if (str == NULL || strlen(str) == 0 || count_words(str) == 0)
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * (sizeof(char *)));
	if (words == NULL)
		return (NULL);

	word_index = 0;
	i = 0;
	while (i < strlen(str))
	{
		if (*(str + i) != ' ')
		{
			int char_count;

			char_count = count_char(str + i);
			words[word_index] = malloc((char_count + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				while (word_index >= 0)
					free(words[word_index--]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < char_count; j++)
				words[word_index][j] = str[i++];
			word_index++;
			continue;
		}
			i++;
	}
	words[word_count] = NULL;
	return (words);
}
