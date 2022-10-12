#include "main.h"

/**
* _isalpha -  check if the character is alpphabetic.
* @c: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
	else if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
