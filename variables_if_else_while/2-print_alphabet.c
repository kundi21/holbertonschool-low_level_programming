#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 if success
 */
int main(void)
{
	char x = 'a';

	for (; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);

}
