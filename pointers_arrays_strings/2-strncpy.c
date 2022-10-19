#include "main.h"

/**
*  *_strncpy -  prints the copy of the strings.
* @src: character to check.
* @dest: sttring to copy.
* @n: array to limit.
* Return: dest if exited correctly, non-zero otherwise.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int cop;

	for (cop = 0; cop < n && src[cop] != '\0'; cop++)
		dest[cop] = src[cop];
	for (; cop < n; cop++)
		dest[cop] = '\0';

	return (dest);
}
