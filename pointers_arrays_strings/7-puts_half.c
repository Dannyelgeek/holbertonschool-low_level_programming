#include "main.h"

/**
* puts_half -  prints half of a string.
* @str: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void puts_half(char *str)
{
	int beg = 0, half = 0, end = 0;

	while (str[beg] != '\0')
	{
		beg += 1;
	}

	if (beg % 2 == 0)
	{
		for (half = beg / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
	else if (beg % 2)
	{
		for (end = (beg - 1) / 2; end < beg - 1; end++)
		{
			_putchar(str[end + 1]);
		}
	}
	_putchar('\n');
}

