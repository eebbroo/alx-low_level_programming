#include <stdio.h>
#include "main.h"

/**
 *swap_int - swaps the value of two ints.
 *
 *@a: Parameter pointer as first argument
 *@b: Parameter pointer as second argument
 *
 * return: No return.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;
	*b = i;
}

