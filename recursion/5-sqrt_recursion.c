#include "main.h"

/**
 * _sqrt_recursion - returns the natural
 * square root of a number.
 * root - auxiliar function.
 * @n: number to root.
 * Return: 1 if exited correctly.
 */

int _sqrt_recursion(int n)
{
	int r1 = 0;

	if (n < 0)
		return (-1);
	else
		return (root(n, r1));
}

int root(int n, int r1)
{
	if (r1 * r1 == n)
		return (r1);

	else if (r1 * r1 < n)
		return (root(n, r1 + 1));

	else
		return (-1);
}

