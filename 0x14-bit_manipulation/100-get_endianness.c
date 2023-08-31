#include "main.h"
/**
 * get_endianness - ...
 *
 * Return: ...
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
