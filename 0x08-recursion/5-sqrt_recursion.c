#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - returns the natural square root of a number
 * @n: integer to calculate the aquare root
 * @i: iterator
 *
 * Return: Evaluate the square root
 */
int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (natural_sqrt_recursion(n, i + 1));
}
