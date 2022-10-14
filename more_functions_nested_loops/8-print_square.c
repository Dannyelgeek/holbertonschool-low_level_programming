#include "main.h"

/**
* rint_diagonal - draws a diagonal line in the terminal.
* @n: times to print '\'
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_square(int size)
{
	int h;
    int r;

	for(h = 1; h <= size; h++)
	{
        for(r = h - 1; r <= size - 2; r++)
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
