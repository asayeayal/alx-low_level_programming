#include "main.h"

/**
 * set_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n | j);

	return (1);
}
