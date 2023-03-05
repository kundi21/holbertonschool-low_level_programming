#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
