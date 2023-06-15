#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: least integer
 * @max: most integer
 *
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, k, num, j;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	ptr = malloc(k * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (num = min, j = 0; num <= max && j < k; num++, j++)
		ptr[j] = num;

	return (ptr);
}
