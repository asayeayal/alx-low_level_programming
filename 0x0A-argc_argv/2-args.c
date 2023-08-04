#include "main.h"
#include <stdio.h>
/**
 * main - executes all args
 * @argv: vector
 * @argc: count
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
