#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}