#include "main.h"

/**
* print_square - draws a square the terminal.
* @size: times to print '#'
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_square(int size)
{
	int h;
	int r;

	for (h = 1; h <= size; h++)
	{
		for (r = 1; r <= size - 1; r++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
