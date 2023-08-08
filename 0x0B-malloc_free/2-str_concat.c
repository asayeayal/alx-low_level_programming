#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 * @s1: concatenate first string
 * @s2: concatenate second string
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		y++;
	l = x + y;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);
	y = 0;
	while (k < l)
	{
		if (k <= x)
			s[k] = s1[k];
		if (k >= x)
		{
			s[k] = s2[y];
			y++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
