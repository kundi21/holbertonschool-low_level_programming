#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: Number of / characters to print.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		if (i + 1 < n)
		{
			for (j = i + 1; j > 0; j--)
				_putchar(' ');
		}
	}
	if (i == 0)
		_putchar('\n');
}
