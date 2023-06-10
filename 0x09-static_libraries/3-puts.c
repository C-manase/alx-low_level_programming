#include "main.h"

/**
 * _puts - Prints a string to a stdout
 * @str: pointer to string
 * Return: nothing
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
