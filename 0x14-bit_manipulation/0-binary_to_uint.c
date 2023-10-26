#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars.
 *
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, j, i;

	n = i = j = 0;
	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (j < i)
	{
		n = n << 1;
		if (b[j] == '1')
			n += 1;
		j++;
	}
	return (n);
}
