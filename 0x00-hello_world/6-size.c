#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints the size of various types
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("size of a char: %lu byte\n", sizeof(char));
	printf("size of an int: %lu bytes\n", sizeof(int));
	printf("size of a long int: %lu bytes\n", sizeof(long int));
	printf("size of a long long int: %d bytes\n", (int) sizeof(long long int));
	printf("size of a float: %lu bytes", sizeof(float));
	return (0);
}
