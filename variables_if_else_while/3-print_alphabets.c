#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and then upercase
 *
 * Return: 0 if success
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	for (; x <= 'z'; x++)
	putchar(x);
	for (; y <= 'Z'; y++)
	putchar(y);
	putchar('\n');
		return (0);

}
