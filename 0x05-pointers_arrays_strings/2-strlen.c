#include "main.h"
#include "string.h"

/**
 * _strlen - Returns the length of a string
 * @s - pointer to a string
 * Return: 0 ( success)
 */
int _strlen(char *s)
{
	int a;

	a = strlen(s);
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
