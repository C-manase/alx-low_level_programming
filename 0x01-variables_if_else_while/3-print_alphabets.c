#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints alphabets in lowercase then in uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
