#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function prints the chess board
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0 ; k < 8 ; k++)
	{
		for (l = 0 ; l < 8 ; l++)
			putchar(a[k][l]);
		putchar('\n');
	}
}

