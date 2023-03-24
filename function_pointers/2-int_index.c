#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}

	return (-1);
}
