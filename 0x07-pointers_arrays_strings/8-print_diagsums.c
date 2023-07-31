#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - begins executing entry point
 * @size: inputs
 * @a: inputs
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int j;
	int n;
	int sum1 = 0;
	int sum2 = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
	sum1 = sum1 + a[j];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
