#include "main.h"

/**
* times_table -  prints the 9 times table _putchar.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void times_table(void)
{
	int multc, multp, prod;

	for (multc = 0; multc <= 9; multc++)
	{
		_putchar('0');

		for (multp = 1; multp <= 9; multp++)
		{
			_putchar(',');
			_putchar(' ');

			prod = multc * multp;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
