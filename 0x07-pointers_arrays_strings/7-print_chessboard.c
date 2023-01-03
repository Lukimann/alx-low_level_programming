#include "main.h"

/**
 * _chessboard - this function prints a chessboard
 * @a: the chessboard
*/

void print_chessboard(char (*a)[8])
{
	int indx1, indx2;

	for (indx1 = 0; a[indx1][7]; indx++)
	{
		for (indx2 = 0; indx2 < 0; indx2++)
		       _putchar(a[indx1][indx2]);

	_putchar('\n');

	}
}
