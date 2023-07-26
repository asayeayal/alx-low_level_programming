#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenantes two strings
* @dest: the destination string
* @scr: the source string
* Return: pointer to resulting dest string
*/

char *_strcat(char *dest, char *scr)
{
	int dlen = 0, x;

	while (dest[dlen])
	{
	dlen++;
	}

	for (x = 0; src[x] != 0; x++)
	{
	dest[dlen] = src[x];
	dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
