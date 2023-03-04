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

	while (s[i])
	{
		if (s[i] == '-')
			x *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			y = y * 10 + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

		i++;
	}

	return (y * x);
}
