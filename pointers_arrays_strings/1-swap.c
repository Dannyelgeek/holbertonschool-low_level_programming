#include "main.h"

/**
* swap_int -  swaps the values of two integers.
* @a: First character to swap.
* @b: Second charecther to swap.
* Return: 0 if exited correctly, non-zero otherwise.
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
