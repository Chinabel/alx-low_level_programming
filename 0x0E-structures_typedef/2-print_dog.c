#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print out struct dog
 * @d: the pointer to char
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
		{
			printf(nil);
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		if ((*d).age == NULL)
		{
			printf(nil);
		}
		else
		{
			printf("Age: %f\n", (*d).age);
		}
		if ((*d).owner == NULL)
		{
			printf(nil);
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
