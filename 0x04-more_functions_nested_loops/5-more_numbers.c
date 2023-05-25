#include "main.h"

/**
 * more_numbers - prints 10 times the numbers (0-14)
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int a, b, c, i = 0;

	while (i < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if (a <= 9)
			{
				b = a;
			}
			else if (a >= 10)
			{
				c = a / 10;
				b = a % 10;
				_putchar(c + '0');
			}
			_putchar(b + '0');
		}
		_putchar('\n');
		i++;
	}
}
