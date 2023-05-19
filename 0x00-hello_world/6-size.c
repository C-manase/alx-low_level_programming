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
	printf("size of a float: %lu bytes\n", sizeof(float));
	printf("size of a double: %lu bytes\n", sizeof(double));
	printf("size of a long double: %lu bytes\n", sizeof(long double));
	printf("size of short int: %lu bytes\n", sizeof(short int));
	return (0);
}
