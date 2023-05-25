#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: number of times
 *
 * Return: 0 (success)
 */
void print_line(int n)
{
	int l = 0;

	while (l < n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}

