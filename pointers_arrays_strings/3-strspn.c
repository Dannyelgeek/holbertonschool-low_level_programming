#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be read.
 * @accept: string containing the characters to match.
 * Return: 0 if exited correctly.
 */

unsigned int _strspn(char *s, char *accept)
{
	int len, count, read, num;

	read = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		num = 0;
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (s[len] == accept[count])
			{
				read++;
				num = 1;
			}
		}
		if (num == 0)
		{
			return (read);
		}
	}
	return (0);
}

