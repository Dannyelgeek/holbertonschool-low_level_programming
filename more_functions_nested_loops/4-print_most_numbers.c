#include "main.h"

/**
* print_most_numbers - print the numbers without 2 or 4.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		_putchar(n);
	}
	_putchar('\n');
}
