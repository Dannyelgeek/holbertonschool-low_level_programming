#include <stdio.h>

/**
* print_to_98 - all roads lead to 98.
* @n: the start of the line.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d,", n++);
		printf("%d\n", n);
	}
}
