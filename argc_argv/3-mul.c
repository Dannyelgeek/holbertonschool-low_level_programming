#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of argc arguments.
 * Return: 0 if exited correctly.
*/

int main(int argc, char *argv[])
{
	int ind, result = 1;

	for (ind = 1; ind < argc; ind++)
	{
		int x = strtol(argv[ind], NULL, 10);
		result = result * x;
	}
	printf("%d\n", result);
	return (0);
}

