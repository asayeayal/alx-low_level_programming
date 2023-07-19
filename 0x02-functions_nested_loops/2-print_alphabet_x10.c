#include "main.h"

/**
 * print_alphabet_*10 - a function that prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_*10(void)
{

	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
