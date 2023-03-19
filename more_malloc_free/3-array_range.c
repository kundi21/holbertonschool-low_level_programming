#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min
 * @max: max
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int x;

	if (min > max)
	{
		return (NULL);
	}

	size = max + min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = min + x;
	}

	return (array);
}

