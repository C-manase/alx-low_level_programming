#include "main.h"

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of members
 * @size: number of bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	s = ptr;
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (ptr);
}
