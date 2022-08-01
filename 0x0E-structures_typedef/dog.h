#ifndef DOG_FILE
#define DOG_FILE

/**
 * struct dog - the structure dog
 * @name: indicates a pointer to the name of the dog
 * @age: indicates the age of the dog with float type
 * @owner: indicates a pointer to the owner of the dog
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

#endif
