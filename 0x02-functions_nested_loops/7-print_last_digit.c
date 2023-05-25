#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: value of the last digit
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = ((n % 10) * -1);
		_putchar (lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = (n % 10);
		_putchar (lastDigit + '0');
		return (lastDigit);
	}
}
