#include "main.h"

/**
 * _strlen_recursion - evaluates the size of a string
 * @s: string
 *
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}

/**
 * pal - evaluates a palindrome
 * @s: string
 * @i: position
 * Return: Boolen value
 */
int pal(char *s, int i)
{
	if (i < 1)
		return (1);
	else if (*s == *(s + i))
		return (pal(s + 1, i - 2));
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: 1 if a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1));
}
