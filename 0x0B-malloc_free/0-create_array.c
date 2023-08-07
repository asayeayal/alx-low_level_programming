#include "main.h"
#include <stdlib.h>
/**
 * create_array - begins executing an array char
 * @c: char to fill array
 * @size: size of array
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
