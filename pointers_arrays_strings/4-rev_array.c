#include "main.h"

/**
* reverse_array -  prints a array in reverse.
* @a: character to check.
* @n: arrays to rev
* Return: 0 if exited correctly, non-zero otherwise.
*/

void reverse_array(int *a, int n)
{
	int len, tmp;

	if (n > 0)
	{
		for (len = 0; len <= (n / 2); len++)
		{
			tmp = a[n - len - 1];
			a[n - len - 1] = a[len];
			a[len] = tmp;

		}
	}

}
