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
			printf("Name: (nil)\n";
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
