#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure dog
 * @name: indicates the name of the dog
 * @age: indicates the age of the dog
 * @owner: indicates the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
