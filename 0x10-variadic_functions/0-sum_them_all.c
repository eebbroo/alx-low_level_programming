#include "variadic_functions.h"

/**
 *sum_them_all - Sums up all interger arguments
 *
 *@n:number of parameter arguments
 *
 *Return: Return sum of arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int i, sum = 0, val;

	if (n == 0)
		return (0);
	val = va_arg(ap, int);
	for (i = 0; i < n; i++)
	{
		sum += val;
	}
	va_end(ap);
	return (sum);
}
