#include <stdio.h>

/**
* main -  prints the numbers without printf.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	putchar('\n');
	return (0);
}
