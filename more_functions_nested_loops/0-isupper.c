#include "main.h"

/**
* _isupper -  prints if the character is uppercase.
* @c: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

