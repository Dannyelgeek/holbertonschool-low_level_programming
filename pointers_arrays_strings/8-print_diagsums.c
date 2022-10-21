#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: string to be read.
 * @size: substring to be find.
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int lec;

	unsigned int add1 = 0, add2 = 0;

	for (lec = 0; lec < size; lec++)
	{
		add1 += a[(size * lec) + lec];
		add2 += a[(size * (lec + 1)) - (lec + 1)];
	}
	printf("%d, %d\n", add1, add2);
}

