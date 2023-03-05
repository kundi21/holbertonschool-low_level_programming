#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: str
 * Return: str pointer
 */
char *cap_string(char *str)
{
	int i;
	int j;

	char p [13] = {32, 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			for (j = 0; j < 13; j++)
			{
				if (str[i - 1] == p[j] && i != 0)
					str[i] -= 32;
			}
		}
	}
	return (str);
}
