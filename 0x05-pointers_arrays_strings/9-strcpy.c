#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination value
 * @scr: source value
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *scr)
{
	int x;
	
	for (x = 0; scr[x] != '\0'; x++)
	{
	dest[x] = scr[x];
	}
	dest[x++] = '\0';
	return (dest);
}
