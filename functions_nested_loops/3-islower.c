#include "main.h"

/**
* _islower -  prints if the character is lowercase.
* @c: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
