#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string, in reversE.
 *
 * @str: pointer to string.
 */
void print_rev(char *str)
{
	char *aux = str;

	if (str != NULL && *str != '\0')
	{
		for (; *aux; aux++)
			continue;

		aux--;
		for (; aux != str; aux--)
			_putchar(*aux);
		_putchar(*str);
	}
	_putchar('\n');
}


