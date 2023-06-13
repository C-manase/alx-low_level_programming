#include "main.h"

/**
 * create_array - creates an array of chars
 * And intializes it with a specific char
 * @size: sizeof unsigned int
 * @c: specific char
 *
 * Return: pointer of the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (0);

	while (i < size)
	{
		*(str + i) = c;
		i++;
	}

	return (str);
}
