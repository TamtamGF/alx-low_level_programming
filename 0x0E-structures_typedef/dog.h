#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains elements of dog
 * @name: stores name of dog
 * @age: store age of dog
 * @owner: dog owner informations
 * Description - elements of a dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - new name (typedef) for dog struct.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
