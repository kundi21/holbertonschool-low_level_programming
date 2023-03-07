#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: dest
 * @src: src
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int ldest;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	ldest = i;
	for (i = 0; src[i] != '\0'; i++)
		dest[ldest + i] = src[i];

	return (dest);
}
