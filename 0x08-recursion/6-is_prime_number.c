#include "main.h"

/**
 * actual_prime - recursion loop
 * @n: number
 * @i: iteration
 *
 * Return: 1 if n is prime else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - evaluates a prime number
 * @n: number
 *
 * Return: 1 if n is a prime number or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, n - 1));
}
