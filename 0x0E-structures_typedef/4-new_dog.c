#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - a function that creates a new dog.
 *@name:char dogs name
 *@age:int age of dog
 *@owner:char dog owner
 *Return: Return pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k = 0;
	struct dog *_new;
	char *nam, *own;

	_new = malloc(sizeof(struct dog));
	if (_new == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	nam = malloc((sizeof(char) * i) + 1);
	if (nam == NULL)
		free(_new);
	return (NULL);
	own = malloc((sizeof(char) * j) + 1);
	if (own == NULL)
		free(own);
	free(nam);
	return (NULL);
	for (k = 0; k < i; k++)
		nam[k] = name[k];
	for (k = 0; k < j; k++)
		own[k] = owner[k];
	_new->name = nam;
	_new->age = age;
	_new->owner = own;
	return (_new);
}
