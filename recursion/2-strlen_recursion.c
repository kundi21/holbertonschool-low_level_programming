#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - asdas
 *
 * @s: s
 *
 * Return: integrer.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ((_strlen_recursion)(s + 1) + 1);
	}
}
