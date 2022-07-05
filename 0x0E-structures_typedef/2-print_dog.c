#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - a function that prints a struct dog
 *
 *@d : TAG pointer parameter for struct dog
 *
 *return : No return
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	if ((*d).name == NULL)
		printf("%s\n = Nil", (*d).name);
	if ((*d).owner == NULL)
		printf("%s\n = Nil", (*d).owner);
	else
	{
		printf("Name = %s\n", (*d).name);
		printf("Age = %f\n", (*d).age);
		printf("Owner = %s\n", (*d).owner);
	}
}
