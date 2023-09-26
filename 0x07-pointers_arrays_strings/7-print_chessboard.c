#include "main.h"

/**
 * print_chessboard - a function that prints the chess board
 *
 * @a[8]: the tested variable
 *
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
    int row = 0;
	int col = 0;

	for (row = 0 ; row < 8 ; row++)
	{
		for (col = 0 ; col < 8 ; col++)
		{
			_putchar (*(*(row + a) + col));
		}
		_putchar ('\n');
	}
}
