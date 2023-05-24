#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * @al - variable that takes a character
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char al;

	while (i < 10)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
		i++;
	}
}
