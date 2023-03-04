#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: a pointer to the string
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = (len + 1) / 2; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
