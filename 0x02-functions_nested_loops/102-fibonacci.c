#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *       separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);

	for (i = 0; i < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}

	printf("\n");

	return (0);
}

