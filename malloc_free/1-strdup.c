#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: str
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *str2;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	str2 = malloc(len + 1);

	if (str2 == NULL)
		return (NULL);

	for (i = 0 ; i < len; i++)
		str2[i] = str[i];

	str2[len] = '\0';
	return (str2);
}

