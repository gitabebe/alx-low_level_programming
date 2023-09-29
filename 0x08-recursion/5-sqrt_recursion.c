#include "main.h"

int _sqrt(int num, int r);

/**
 * _sqrt_recursion - returns the natural square r of a number.
 * @n: number
 *
 * Return: square root of n
 *         -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, r));
}


/**
 * _sqrt -calculates natural square root of a number.
 * @num: square root number.
 * @r: root
 *
 * Return: square root
 *        -1 if the number does not have a natural square root
 */
int _sqrt(int num, int r)
{
	if ((root * root) == num)

		return (root);

	if (root == num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}

