#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the first set of array
 * @n: number of elements of the array to be printed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
