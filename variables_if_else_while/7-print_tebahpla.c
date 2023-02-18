#include <stdio.h>
/**
 *main - Prints the lowercase alphabet in reverse.
 *
 *Return: if succes 0.
 */
int main(void)
{
	char letra;

	for (letra = 'z'; letra >= 'a'; letra--)
		putchar(letra);

	putchar('\n');

	return (0);
}
