#include "main.h"

/**
* rev_string -  prints a string in reverse.
* @s: character to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void rev_string(char *s)
{
	int p = 0, r = 0;
	char tmp;

	while (s[p] != '\0')
	{
		p += 1;
	}
	p -= 1;

	for (r = 0; r < p; r++)
	{
		tmp = s[r];
		s[r] = s[p];
		s[p] = tmp;
		p--;
	}
}
