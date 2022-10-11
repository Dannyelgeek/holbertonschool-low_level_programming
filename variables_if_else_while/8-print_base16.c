#include <stdio.h>

/**
* main -  prints all single digit numbers of base 10 starting from 0.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int main(void)
{
	int n;
	char l;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (l = 'a'; l <= 'f'; l++)
	putchar(l);

	putchar('\n');
	return (0);
}
