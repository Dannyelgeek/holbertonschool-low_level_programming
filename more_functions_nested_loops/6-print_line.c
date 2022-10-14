#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: times to print '_'
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_line(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
