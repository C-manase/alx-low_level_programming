#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: natural number
 *
 * Return:  0 (success)
 */
void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
