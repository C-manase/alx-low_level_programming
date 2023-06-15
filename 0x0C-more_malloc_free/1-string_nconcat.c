#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Pointer to the second string
 * @n: Number of bytes
 *
 * Return: pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	if (n < len1)
		s = malloc(sizeof(char) * (len + n + 1));
	else
		s = malloc(sizeof(char) * (len + len1 + 1));

	if (!s)
		return (NULL);

	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len1 && i < (len + n))
		s[i++] = s2[j++];

	while (n >= len1 && i < (len + len1))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
