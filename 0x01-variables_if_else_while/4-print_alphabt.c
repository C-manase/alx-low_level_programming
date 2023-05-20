#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');

	return (0);
}
