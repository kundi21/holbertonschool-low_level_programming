#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted.
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, x, y;

	i = 0;
	x = 1;
	y = 0;

	while (*s != '\0')
	{
		if (*s  == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
		{
			y *= 10;
			y += *s - '0';
			i = 1;
		}
		else if (i)
			break;
		s++;
	}

	return (y * x);
}
