#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string to be reversed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
