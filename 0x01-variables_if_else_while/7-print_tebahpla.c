#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
