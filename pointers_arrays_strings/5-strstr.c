#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: haystack
 * @needle: needle
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;
	int len = 0;

	if (needle[0] == '\0')
		return (&haystack[0]);

	for (x = 0; needle[x] != '\0'; x++)
		continue;

	len = x - 1;

	for (y = 0; haystack[y] != '\0'; y++)
	{
		if (haystack[y] == needle[0])
			if (haystack[y + len] == needle[len])
				return (&haystack[y]);
	}
	return ('\0');
}
