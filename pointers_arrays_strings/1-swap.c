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
	int swap1;
	int swap2;

	swap1 = *a;
	swap2 = *b;
	*b = swap1;
	*a = swap2;
}
