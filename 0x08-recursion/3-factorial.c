#include "main.h"

/**
  * factorial - returns the factorial of a given number.
  * @n: number given to calculate factorial
  *
  * Return: If n > 0 - the factorial of n
  *         If n < 0 - 1 to indicate an error
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
