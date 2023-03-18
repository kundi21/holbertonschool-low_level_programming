#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: pointer to the concatened string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int x = 0;
	unsigned int y = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2] && len2 < n)
	{
		len2++;
	}


	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!concat)
	{
		return (NULL);
	}

	for (x = 0; x < len1; x++)
	{
		concat[x] = s1[x];
	}

	for (y = 0; y < len2; y++)
	{
		concat[x + y] = s2[y];
	}

	concat[x + y] = '\0';

	return (concat);
}
