#include "main.h"
/**
 * _memset - begins executing of a bolck of memory with a specific values
 * @s: address of memory to fill
 * @b: value
 * @n: bytes
 *
 * Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
