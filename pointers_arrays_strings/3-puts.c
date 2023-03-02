#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: pointer to string.
 */
void _puts(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
