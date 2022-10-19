#include "main.h"
#include <stdio.h>

/**
* print_array -  print the array.
* @n: character to check.
* @a: array to check.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void print_array(int *a, int n)
{
	int fix = 0;

	for (fix = 0; fix < n; fix++)
	{
		if (fix == 0)
			printf("%d", a[fix]);
		else
			printf(", %d", a[fix]);
	}
		printf("\n");
}
