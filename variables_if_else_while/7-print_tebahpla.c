#include <stdio.h>

/**
* main -  prints the alphabet in lowercase.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);

	putchar('\n');
	return (0);
}
