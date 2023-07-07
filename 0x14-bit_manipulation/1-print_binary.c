#include "main.h"

/**
 * rev_binary - prints binary representation of number with & and Shift
 * Right operators, but uses recursion to reverse the result
 *
 * @n: decimal number
 * @check: checks for special case number 0
 *
 * Return: Nothing
 */
void rev_binary(unsigned long int n, int check)
{
	if (check == 1)
	{
		_putchar('0');
		return;
	}

	if (n == 0)
		return;

	rev_binary(n >> 1, check);

	if ((n & 1) == 0)
		_putchar('0');

	if ((n & 1) == 1)
		_putchar('1');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: base number 10 to be represented
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		rev_binary(n, 1);
	else
		rev_binary(n, 0);
}
