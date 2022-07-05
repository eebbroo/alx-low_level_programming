#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores some information of a dog
 *
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner of dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */

typedef struct dog dog_t;
/**
 * dog_t - Typedef for struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
