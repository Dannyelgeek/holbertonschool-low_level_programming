#include "main.h"

/**
*  _strcmp -  prints a concatenate string.
* @s1: character to check.
* @s2: sttring to concatenate.
* Return: dest if exited correctly, non-zero otherwise.
*/

int _strcmp(char *s1, char *s2)
{
	int com, iq = 0;

	while (s1[iq] != '\0')
	{
		iq += 1;
	}

	com = 0;

	while (com < iq)
	{
		if (s1[com] != s2[com])
		{
			return (s1[com] - s2[com]);
		}
		com++;
	}
	return (0);
}
