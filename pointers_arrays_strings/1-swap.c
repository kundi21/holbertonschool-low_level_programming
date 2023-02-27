#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: value of pointer
 * @b: value of pointer
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*a = *b;
	*b = c;
}
