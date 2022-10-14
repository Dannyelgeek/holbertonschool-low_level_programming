#include "main.h"

/**
* rint_diagonal - draws a diagonal line in the terminal.
* @n: times to print '\'
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_diagonal(int n)
{
	int l;
	int s;

	for(l = 1; l <= n; l++)
	{
		for (s = 1; s <= l; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
