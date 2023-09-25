#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: a pointer to the first occurence of the character c in the string s
 *         NULL if the characteris not found
*/
char *_strchr(char *s, char c)
{
	while (strlen(s))
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
		}
		if (*s == c)
			return (s);
		else
			return ('\0');

}
