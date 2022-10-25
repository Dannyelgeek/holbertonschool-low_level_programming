#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n: number to check.
 * Return: 0 if exited correctly
 */

int is_prime_number(int n)
{

	int pri1 = 2;

	if (n <= 1)
		return (0);
	else
		return (primo(n, pri1));
}

/**
 * primo - auxiliar function.
 * @n: number to check:
 * @pri1: checker.
 * Return: pri1 if works correctly and primo checker.
*/

int primo(int n, int pri1)
{
	if (n % pri1 == 0 && pri1 < n)
		return (0);

	else if (n % pri1 != 0)
		return (primo(n, pri1 + 1));
	return (1);
}

