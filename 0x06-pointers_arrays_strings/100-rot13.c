#include <string.h>
#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: the string to encode
 * Return: the encoded string
 */
char *rot13(char *s)
{
	size_t i, j;
	char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encodedLetters = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(letters); j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = encodedLetters[j];
				break;
			}
		}
	}
	return (s);
}
