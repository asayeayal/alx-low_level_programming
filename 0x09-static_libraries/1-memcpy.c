#include "main.h"
/**
 * _memcpy - begins executing copies memory
 * @dest: memory where is stored
 * @src: memory where it is stored
 * @n: bytes
 *
 * Return: copied memory with n bytes changed
 */
char _memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
