#include <stdio.h>

/**
 * main - prints program name.
 * @argc: number of arguments
 * @argv: array of argc arguments
 * Return: 0 if exited correctly.
*/

int main(int argc, char *argv[])
{
	int ind;

	for (ind = 0; ind < argc; ind++)
	{
		printf("%s\n", argv[ind]);
	}
	return (0);
}

