#include "main.h"

/**
 * _numerical - checks if it is a digit
 * @n: number to be checked
 * Return: 1 (if a number)
 */
int _numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	unsigned int num, i;
	int sign = 1;

	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_numerical(s[i]))
		{
			num = (s[i] - 48) + num * 10;

			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	return (num * sign);
}
