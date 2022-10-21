#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: string to be read.
 * @needle: substring to be find.
 * Return: '\0' if exited correctly.
 */

char *_strstr(char *haystack, char *needle)
{
	int fnd;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		fnd = 0;

		if (haystack[fnd] == needle[fnd])
		{
			do {
				if (needle[fnd + 1] == '\0')
					return (haystack);
					
				fnd++;
			}
		while (haystack[fnd] == needle[fnd]);
		}
		haystack++;
	}
	return (0);
}

