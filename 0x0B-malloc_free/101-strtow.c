#include "main.h"

/**
 *count_word - helper function to count the number of words in a string
 *@s: string to evaluate
 *
 *Return: number of words
 */

int count_word(char *s)
{
	int a, c, w;

	a = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			w++;
		}
	}

	return (w);
}
/**
 ***strtow - splits a string into words
 *@str: string to split
 *
 *Return: pointer to an array of strings (Success)
 *or NULL (Error)
 */
char **strtow(char *str)
{
	char **f, *col;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	f = (char **) malloc(sizeof(char *) * (words + 1));
	if (f == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				col = (char *) malloc(sizeof(char) * (c + 1));
				if (col == NULL)
					return (NULL);
				while (start < end)
					*col++ = str[start++];
				*col = '\0';
				f[k] = col - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	f[k] = NULL;

	return (f);
}
