#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
