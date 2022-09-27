 #include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int k, b;

	k = 0;
        while (k < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[k][b]);
			b++;
		}
		_putchar('\n');
		k++;
	}
}
