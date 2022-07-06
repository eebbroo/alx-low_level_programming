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
	char *nam, *own;

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
	 nam = malloc((sizeof(char) * i) + 1);
	 if (nam == NULL)
	 {
		 free (_new);
		 return (NULL);
	 }
	 own = malloc((sizeof(char) * j) + 1);
	 if (own == NULL)
	 {
		 free (own);
		 free (nam);
		 return (NULL);
	 }
	 while (k < i)
	 {
		 k = 0;
		 nam[k] = name[k];
		 k++;
	 }
	 while (k < j)
	 {
		 k = 0;
		 own[k] = owner[k];
		 k++;
	 }
	 _new->name = nam;
	 _new->age = age;
	 _new->owner = own;
	 return (_new);
}

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
