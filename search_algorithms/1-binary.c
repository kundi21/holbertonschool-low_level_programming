#include "search_algos.h"
/**
 * function that searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in 
 * @size: number of elements in array
 * @value: value to search for.
 * Return: 
 */
int binary_search(int *array, size_t size, int value)
{

	if (!array)
		return (-1);

	if (array[size / 2] != value)
	{
		printf("Searching in array: %ls", array);
	} else
		return (size / 2);
}
