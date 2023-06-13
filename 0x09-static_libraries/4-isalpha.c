#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *
 * @c: The int to print
 * Return: 1 if is a letter and 0 otherwise
 */

int _isalpha(int c)

{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
