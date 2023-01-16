#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the onformation of the dog
 * @name: His name
 * @age: The age
 * @owner: His owner
 *
 * Description: long
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
 * dog_k _ typedef for struct dog
 */

typedef struct dog dog_k;

void init_dog(struct *d, char *name, float age, chat *owner);
void print_dog(struct dog *d);
dog_k *new_dog(char *name, float age, char *owner);
void free_dog(dog_k *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
