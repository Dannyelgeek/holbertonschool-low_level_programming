#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: n bytes to concat
 * Return: point if exited correctly.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int con = 0;
	unsigned int cat = 0;
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[con] != '\0')
		con++;
	point = malloc(sizeof(char) * (con + n + 1));
	if (point == NULL)
		return (NULL);
	con = cat = 0;
	while (s1[con] != 0)
	{
		point[con] = s1[con];
		con++;
	}
	while (cat < n && s2[cat] != 0)
	{
		point[con] = s2[cat];
		con++; cat++;
	}
	point[con] = '\0';
	return (point);
}

