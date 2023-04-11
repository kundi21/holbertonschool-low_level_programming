#include "main.h"
/**
 * binary_to_unit - binary to unit
 * @b: pointer to b
 * Return: unit
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		n = (n << 1) + (*b - '0');
		b++;
	}

	return (n);
}
