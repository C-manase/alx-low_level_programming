#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
/**
 * struct dog - dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
