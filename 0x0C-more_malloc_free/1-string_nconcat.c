#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len])
		len++;

	str = malloc(sizeof(char) * (len + n + 1));

	if (str == NULL)
		return (NULL);

	while (i < len && s1[i])
	{
		str[i] = s1[i];
		i++;
	}

	while (j <  n && s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}

	str[i + j] = '\0';

	return (str);
}
