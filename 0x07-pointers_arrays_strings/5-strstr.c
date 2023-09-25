#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring
 * @haystack: String to search through
 * @needle: String to search for
 *
 * Return: Pointer to beginning of located substring
 *         NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack)
	{
		i = haystack;
		j = needle;
		while (*j == *haystack && *haystack != '\0'
		       && *i != '\0')
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
			return (i);
		haystack = i + 1;
	}

	return ('\0');
}
