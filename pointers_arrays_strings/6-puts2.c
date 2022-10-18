#include "main.h"

/**
*  -  prints a string in reverse.
* @str: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}

