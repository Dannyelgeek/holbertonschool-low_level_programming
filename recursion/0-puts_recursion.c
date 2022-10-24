#include "main.h"

/**
 * _puts_recursion - prints a string using recursion.
 * @s: string to print.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}

