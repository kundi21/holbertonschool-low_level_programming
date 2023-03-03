#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: pointer to string.
 */
void print_rev(char *str)
{
	char *aux = str;

        for (; *aux; aux++)
		;
	aux--;
	for (; aux != str; aux--)
		_putchar(*aux);
	_putchar(*str);
	_putchar('\n');
}


