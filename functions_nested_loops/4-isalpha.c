#include "main.h"

/**
* _isalpha -  prints the alphabet x10 with _putchar.
* @c: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
