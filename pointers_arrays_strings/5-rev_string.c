#include "main.h"
#include <stdio.h>
/**
 * rev_string  - function that prints a string, in reversE.
 *
 * @s: pointer to string.
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;

	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
