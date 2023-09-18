#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
**/
void rev_string(char *s)
{
	int i, j = 0, len = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
