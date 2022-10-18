#include "main.h"

/**
* print_rev -  prints a string in reverse.
* @s: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p += 1;
	}
	p -= 1;
	while (p >= 0)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}

