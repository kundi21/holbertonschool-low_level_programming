#include "main.h"
#include <stdio.h>
/**
 * print_square - Function that print squares of #.
 * @n: Input number.
 */
void print_square(int n)
{
	int j;
	int k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
