#include "main.h"

/**
* main -  prints the alphabet in lowercase with _putchar.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);

	_putchar('\n');
	return (0);
}
