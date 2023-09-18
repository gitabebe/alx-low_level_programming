#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to be printed.
**/
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	if (len % 2 != 0)
		len = len / 2 + 1;
	else
		len /= 2;

	for (i = len; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
