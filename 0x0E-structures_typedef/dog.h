#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the onformation of the dog
 * @name: His name
 * @age: The age
 * @owner: His owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, chat *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
