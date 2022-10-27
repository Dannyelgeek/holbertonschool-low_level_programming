#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of argc arguments.
 * Return: 0 if exited correctly.
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

