#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encode rot13
 * @s: pointer to strings param
 * Return: *s
 */

char *rot13(char *s)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPKRSTUVWXYZabcdefghijklmnopkrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
		for (x = 0; s[x] != '\0'; x++)
		{
			for (y = 0; y < 52; y++)
			{
				if (s[x] == data1[y])
				{
					s1[x] = datarot[y];
					break;
				}
			}
		}
	return (s);
}
