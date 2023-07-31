#include "main.h"

/**
 * _strspn - fills the point
 * @accept: inputs
 * @s: inputs
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	unsigned int n;
	unsigned int value;
	unsigned int check;

	value = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[j])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
			return (value);
	}

	return (value);
}




