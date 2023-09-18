#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to get its length
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}
