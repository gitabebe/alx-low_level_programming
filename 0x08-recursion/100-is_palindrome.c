#include "main.h"
#include <string.h>

int _strlen_palindrome(char *s);
int palindrome_compare(char *s, int l);

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: input
 *
 * Return: 1 ifbstring is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_palindrome(s);
	return (palindrome_compare(s, l));
}
/**
 * _strlen_palindrome - Returns length of string
 * @s: input
 * Return: length of string
 */
int _strlen_palindrome(char *s)
{
	if (*s)
	{
		return (1 +  _strlen_palindrome(s + 1));
	}
	return (0);
}
/**
 * palindrome_compare - Compare palindrome
 * @s: input
 * @l: input
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	else if (*s == *(s + (l - 1)))
	{
		return (palindrome_compare(s + 1, l - 2));
	}
	else
		return (0);
}
