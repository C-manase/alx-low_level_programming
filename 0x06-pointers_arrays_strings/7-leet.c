#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: s
 */
char *leet(char *s)
{
	int i, j;

	char *c = "aAeEoOtTlL";
	char *k = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
				s[i] = k[j];
		}
		i++;
	}
	return (s);
}
