#include "main.h"

/**
* _strlen -  returns the length of a string.
* @s: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
