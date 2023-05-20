#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digits of base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar(10);

	return (0);
}
