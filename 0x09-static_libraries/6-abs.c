#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: variable taking the value
 *
 * Return: 0 (success)
 */
int _abs(int i)
{
	if (i < 0)
		return (i * (-1));
	else if (i == 0)
		return (0);
	else
		return (i);
}
