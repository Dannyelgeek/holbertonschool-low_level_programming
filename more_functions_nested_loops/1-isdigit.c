#include "main.h"

/**
* _isupper -  prints if the character is a digit.
* @c: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

