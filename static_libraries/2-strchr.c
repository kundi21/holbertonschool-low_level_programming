#include "main.h"
#include <stdio.h>
/**
 *  _strchr - locates a character in a string
 *
 * @s: s
 * @c: c
 *
 * Return: akka
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	if (c == '\0')
	return (&s[i]);
	return ('\0');
}
