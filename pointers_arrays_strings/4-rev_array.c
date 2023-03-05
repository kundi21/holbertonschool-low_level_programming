#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of integers
 * @a: a
 * @n: n
 *
 * Return: reversearray
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
