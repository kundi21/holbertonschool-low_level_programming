#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0 if success.
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", (x * y));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
