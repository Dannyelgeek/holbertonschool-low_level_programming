#include "main.h"

/**
* main -  prints the alphabet x10 with _putchar.
* Return: 0 if exited correctly, non-zero otherwise.
*/

int main(void)
{
int r;
int ch;

for (r = 0; r <= 10; r++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);

	_putchar('\n');
}

return (0);
}
