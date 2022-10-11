#include <stdio.h>

/**
* main -  prints the alphabet in lowercase.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int main(void)
{
	int ad, fp, rz;

	for (ad = 'a'; ad <= 'd'; fp = 'f'; fp <= 'p'; rz = 'r'; rz <= 'z' )
	putchar(ad, fp, rz);

	putchar('\n');
	return (0);
}
