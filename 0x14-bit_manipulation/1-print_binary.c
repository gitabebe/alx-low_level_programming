#include "main.h"

/**
  * print_binary - binary representation of a number
  * @n: binary number to represent
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
