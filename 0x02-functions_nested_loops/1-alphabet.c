#include "main.h"

/**
 * print_alphabet - Checks if alphabet is in lowercase
 *
 * Description: prints alphabet in lowercase
 *
 * @al - collects the alphabets in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
