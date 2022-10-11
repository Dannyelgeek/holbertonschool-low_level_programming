#include "main.h"

/**
* print_last_digit -  prints the last digit of a number.
* @n: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int print_last_digit(int n)
{
	int l_digit = n % 10;

	if (l_digit < 0)
		l_digit *= -1;

	_putchar(l_digit +  '0');
	return (l_digit);
}
