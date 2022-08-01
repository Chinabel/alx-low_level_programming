#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to a char value
 * @name: pointer to name value
 * @age: a float value
 * @owner: pointer to owner value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
