#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to first integer to be swapped
 * @b: a pointer to second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
