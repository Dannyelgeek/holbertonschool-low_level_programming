#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number base
 * @m: number to transform
 * Return: the number of bits needed.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ind, res = 0;

	ind = 8 * sizeof(n) - 1;
	while (ind >= 0)
	{
		if (((n ^ m) >> ind) & 1)
			res += 1;
		ind--;
	}
	return (res);
}
