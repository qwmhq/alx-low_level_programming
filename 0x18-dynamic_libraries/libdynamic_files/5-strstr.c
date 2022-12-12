#include <string.h>
#include "main.h"

/**
 * _strstr - find the first occurence of a substring within another string
 * @haystack: the string to search
 * @needle: the substring to find
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
