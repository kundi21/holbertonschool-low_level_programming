#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: pointer to string.
 */
void _puts(char *str)
{
	for (; *str; str++)
		_putchar(*str);
	_putchar('\n');
}
