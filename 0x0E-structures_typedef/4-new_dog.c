#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - a function that creates a new dog.
 *
 *@name:char dogs name
 *@age:int age of dog
 *@owner:char dog owner
 *
 * Return: Return pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	int k;
	struct dog *_new;
	char _nam, _own;

	_new = malloc(sizeof(struct dog));
	if (_new == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
		;
	}
	 for (j = 0; owner[j] != '\0'; j++)
        {
                ;
        }
	 _nam = malloc((sizeof(char) * i) + 1);
	 if (_nam == NULL)
	 {
		 free (_new);
		 return (NULL);
	 }
	 _own = malloc((sizeof(own) * j) + 1);
	 if (_own == NULL)
	 {
		 free (_own);
		 free (_nam);
		 return (NULL);
	 }
	 while (k < i)
	 {
		 k = 0;
		 _nam[k] = name[k];
		 k++
	 }
	 while (k < j)
	 {
		 k = 0;
		 _own[k] = _own[k];
		 k++
	 }
	 _new->name = _nam;
	 _new->age = age;
	 _new->owner = _own;
	 return (_new);
}
