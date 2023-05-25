#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 * Return: 0 (success)
 */
void print_diagonal(int n)
{
	int d, i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			for (d = 0; d < i; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
