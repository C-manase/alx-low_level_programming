#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: natural number
 *
 * Return:  0 (success)
 */
void print_to_98(int n)
{
	int j;

	if (n < 99)
	{
		for (j = n; j < 99; j++)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
	else if (n > 97)
	{
		for (j = n; j > 97; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
