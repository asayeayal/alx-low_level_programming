#include "main.h"
/**
 * print_chessboard - begins executing entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int n;

	for (j = 0; j < 8; j++)
	{
	for (n = 0; n < 8; n++)
	_putchar(a[j][n]);
	_putchar('\n');
	}
}
