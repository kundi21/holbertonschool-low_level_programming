#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Function that prints triangle.
 * @n: Size of triangle.
 */

void print_triangle(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = n - i; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
