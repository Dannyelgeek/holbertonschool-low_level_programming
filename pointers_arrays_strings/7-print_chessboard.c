#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a: array to print.
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int wht, blk;

	for (wht = 0; wht < 8; wht++)
	{
		for (blk = 0; blk < 8; blk++)
			_putchar(a[wht][blk]);

		_putchar('\0');
	}
}

