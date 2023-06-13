#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, len, len1, k;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (str == NULL)
		return (NULL);

	k = i + j + 1;
	for (len = 0, len1 = 0; len < k; len++)
	{
		if (len < i)
			str[len] = s1[len];
		else
			str[len] = s2[len1++];
	}

	return (str);
}
