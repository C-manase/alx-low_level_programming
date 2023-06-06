#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where to copy to
 * @src: memory area to be copied
 * @n: bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
