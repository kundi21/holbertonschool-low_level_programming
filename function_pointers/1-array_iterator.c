#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -  function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: pointer to array.
 * @size: size array.
 * @action: pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  x;

	if (action && size && array)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
