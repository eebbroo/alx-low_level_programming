#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion
 *
 * @x: base parameter.
 *@y: exponent parameter.
 *
 *return: Return x^y.
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
	{

		power = x * _pow_recursion(x, (y - 1));
	}
	return (power);
}
