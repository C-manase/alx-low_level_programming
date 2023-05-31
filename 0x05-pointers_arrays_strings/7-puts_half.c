#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string to be halved
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, half;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	half = (strlen(str) + 1) / 2;
	for (i = half; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
