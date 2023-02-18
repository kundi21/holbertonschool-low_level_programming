#include <stdio.h>
/**
 * main - Prints the alphabet lowercase except e & q
 *
 * Return: 0 if success
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		if (letra != 'e' && letra != 'q')
			putchar(letra);
	}

	putchar ('\n');

	return (0);

}
