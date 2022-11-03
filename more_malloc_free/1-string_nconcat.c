#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n:
 * Return: point if exited correctly.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int con = 0, cat = 0, ten = 0, nat = 0;
	char *point;

	if (s1 == NULL)
		s1 = "";

	for (con = 0; s1[con] != '\0'; con++)
	{
	}

	if (s2 == NULL)
		s2 = "";

	for (cat = 0; s2[cat] != '\0'; cat++)
	{
	}


	point = malloc(sizeof(char) * con + cat + 1);

	if (point == NULL)
		return (NULL);

	for (ten = 0; s1[ten] != '\0'; ten++)
		point[ten] = s1[ten];

	while (nat < n)
	{
		point[nat + con] = s2[nat];
		nat++;
	}

	return (point);
}
