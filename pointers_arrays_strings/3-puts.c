#include "main.h"

/**
* _puts -  prints a string.
* @str: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}

