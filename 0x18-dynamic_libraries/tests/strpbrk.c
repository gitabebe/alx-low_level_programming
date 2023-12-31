#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 *         NULL if no such byteis found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
