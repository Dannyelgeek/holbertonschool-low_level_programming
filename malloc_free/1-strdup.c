#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to copy.
 * Return: point if exited correctly.
*/

char *_strdup(char *str)
{
	int len, cop;
	char *point;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	point = malloc(sizeof(char) * len + 1);

	if (point == NULL)
		return (NULL);

	for (cop = 0; str[cop] != '\0'; cop++)
		point[cop] = str[cop];

	return (point);
}

