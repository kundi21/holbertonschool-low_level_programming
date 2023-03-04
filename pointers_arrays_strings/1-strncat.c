#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: dest
 * @src: src
 * @n: n
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int ldest;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	ldest = i;
	if (src[0] != '\0')
	{
		for (i = 0; i < n; i++)
			dest[ldest + i] = src[i];
	}
	return (dest);
}
