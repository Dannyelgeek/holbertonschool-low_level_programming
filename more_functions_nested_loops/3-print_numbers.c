#include "main.h"

/**
* print_numbers - print the numbers
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);

	_putchar('\n');
}
