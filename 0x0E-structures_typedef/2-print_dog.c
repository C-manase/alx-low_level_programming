#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: Points to struct dog
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("My name is %s, and I am %.1f and my owner is %s :) - Woof\n", d->name, d->age, d->owner);
}
