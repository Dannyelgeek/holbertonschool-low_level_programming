#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: num to print.
*/

void print_binary(unsigned long int n)
{
	if (n && n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
