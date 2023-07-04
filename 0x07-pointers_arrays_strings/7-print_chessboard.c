#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: pointer array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int ro;
	int col;

	for (ro = 0; ro < 8; ro++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[ro][col]);
		}
		_putchar('\n');
	}
}
