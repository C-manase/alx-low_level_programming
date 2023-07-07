#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer ro a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, c, i;
	int l = 0;

	if (b == 0)
		return (0);

	while (b[l] != 0)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		l++;
	}

	l = l - 1;

	for (i = 0; l >= 0; i++, l--)
	{
		if (b[l] == '0')
			c = 0;
		else if (b[l] == '1')
			c = 1;
		c = c << i;
		a = a | c;
	}
	return (a);
}
