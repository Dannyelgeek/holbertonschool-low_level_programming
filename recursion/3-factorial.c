#include "main.h"

/**
 * factorial - returns the factorial of the given number.
 * @n: given number.
 * Return: 1 if condition is right.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}

