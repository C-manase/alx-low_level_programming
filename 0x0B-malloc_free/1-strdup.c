#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: Null if str = NULL or a pointer to duplicatedd string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	while (len < i)
	{
		s[len] = str[len];
		len++;
	}

	s[len] = '\0';
	return (s);
}
