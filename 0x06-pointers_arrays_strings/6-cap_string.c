#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		j = 0;
		while (j < 13)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}	
