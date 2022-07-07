#include <stdarg.h>
#include <stdio.h>

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

	int i, sum = 0, val;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		val = va_arg(ap, int);

		sum += val;
	}
	return (sum);
	va_end(ap);
}
