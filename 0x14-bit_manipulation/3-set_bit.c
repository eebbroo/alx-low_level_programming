#include "main.h"

/**
 * set_bit - function to se the value of a bit
 * at a given index.
 *
 * @n: pointer of an unsigned long int.
 * @index: index given
 *
 * Return: 1 if true, -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
		return (-1);

	val = 1 << index;
	*n = (*n | val);

	return (1);
}
