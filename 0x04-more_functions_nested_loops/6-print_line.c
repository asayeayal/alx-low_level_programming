#include "main.h"

/**
 * print_line - Draws a single line according to parameter
 * @x: The number of lines to draw
 * Return: empty
 */
void print_line(int x)
{
	int n;

	if (x <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (n = 0; n < x; n++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
