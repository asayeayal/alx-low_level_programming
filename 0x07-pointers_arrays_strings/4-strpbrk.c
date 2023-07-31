#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - begins entry point executing
 * @accept: inputs
 * @s: inputs
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	int n;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[j] == accept[n])
				return (s + j);
		}
	}
	return (NULL);
}
