#include "main.h"

/**
* print_triangle - draws a triangle the terminal.
* @size: times to print '#'
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_triangle(int size)
{
	int h;
	int r;

	for (h = 1; h <= size; h++)
	{
		for (r = 1; r <= size; r++)
		{
			if ((size - r) >= h)
				_putchar(' ');
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
}
}
