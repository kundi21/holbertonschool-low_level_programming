#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: if success 0.
 */
int main(void)
{
	int numero;

	for (numero = 0; numero < 10; numero++)
		putchar((numero % 10) + '0');

	putchar('\n');

	return (0);
}
