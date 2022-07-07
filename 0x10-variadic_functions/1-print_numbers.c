#include "variadic_functions.h"
/**
 *print_numbers- Print numbers
 *
 *@separator:character between intergers
 *@n: Number of parameter arguments
 *
 * Return: Return integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		return;
	if (n < 1)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
			printf("%c", separator);
	}
	printf("\n");
	va_end(ap);
}
