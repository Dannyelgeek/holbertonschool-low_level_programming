#include "main.h"

/**
 *
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
 * root - auxiliar function.
 * @n: number to root:
 * @r1: checker.
 * Return: r1 if works correctly and root checker.
*/

int primo(int n, int pri1)
{
	if (n % pri1 == 0 && pri1 < n)
		return (0);

	else if (n % pri1 != 0)
		return (primo(n, pri1 +1));
	return (1);
}

