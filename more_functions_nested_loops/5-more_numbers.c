#include "main.h"

/**
* more_numbers - print the numbers from 0 to 14 x10.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void more_numbers(void)
{
int c;
int n;
int d;

for (c = 0; c < 10; c++)
{
	for (n = 0; n <= 1; n++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (n != 0)
			{
				if (n > 0 && d <= 4)
				_putchar(n + '0');
			}
			if (n == 0 || d < 5)
			_putchar(d + '0');
		}
	}
	_putchar('\n');
}
}
