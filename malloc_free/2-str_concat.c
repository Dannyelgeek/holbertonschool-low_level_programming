#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: point if exited correctly.
*/

char *str_concat(char *s1, char *s2)
{
	int con, cat, ten, nat;
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

	for (nat = 0; s2[nat] != '\0'; nat++)
		point[nat + con] = s2[nat];

	return (point);
}

