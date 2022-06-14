#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

void print_rev(char *s)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		;
	}
	while(s[i] == '\0')
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');

}
