#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: 0 (success)
 */
void print_triangle(int size)
{
	int a = 0, b, c;

	if (size > 0)
		while (a < size)
		{
			for (b = size - 1; b > a; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c < a + 1; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
			a++;
		}
	else
		_putchar('\n');
}
