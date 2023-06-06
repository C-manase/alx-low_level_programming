#include "main.h"

/**
 * set_string - sets a value of a pointer to a char
 * @s: a pointer to a pointer
 * @to: string
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
