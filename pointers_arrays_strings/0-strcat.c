#include "main.h"
#include <string.h>

/**
*  *_strcat -  prints a concatenate string.
* @src: character to check.
* @dest: sttring to concatenate.
* Return: dest if exited correctly, non-zero otherwise.
*/

char *_strcat(char *dest, char *src)
{
	int con, cat, ten;

	cat = strlen(dest);
	ten = strlen(src);

	for (con = cat; con < (cat + ten); con++)
	{
		*(dest + con) = *(src + (con - cat));
	}
	return (dest);
}
