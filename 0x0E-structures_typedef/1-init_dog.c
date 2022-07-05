#include "dog.h"
/**
 *init_dog - Function that initializes struct dog
 *
 *@d : struct dog function TAG
 *@name : dog name
 *@age : dog age
 *@owner : dog owner
 *
 * Return : No return
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
