#include "main.h"

/**
 * is_divisible - Checks if a number is dibisible
 * @i: number.
 * @j: divisor
 *
 * Return: 0 or 1.
 */
int is_divisible(int i, int j)
{
	if (i % j == 0)
		return (0);

	if (j == i / 2)
		return (1);

	return (is_divisible(i, j + 1));
}

/**
 * is_prime_number - Check for prime number.
 * @n: number to be checked.
 *
 * Return: 1 if the input integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int j = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, j));
}
