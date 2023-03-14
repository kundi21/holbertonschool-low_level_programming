#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars, initializes it with specific char
 * @size: size
 * @c: c
 * Return: array.
 */
char *create_array(unsigned int size, char c)
{
	char *arrray;
	unsigned int x;

	if (size == 0)
		return (NULL);
	arrray = malloc(sizeof(char) * size);
	if (arrray == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		arrray[x] = c;
	return (arrray);
}
