#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: 'pointer char'.
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

