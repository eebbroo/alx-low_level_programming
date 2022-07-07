#include <stdarg.h>
#include <stdio.h>

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

	va_start(ap, n);
	if (*separator == NULL)
		return;
	if (n < 1)
		return;
	int i, val;

	for (i = 0; i < n; i++)
	{
		val = (va_arg(ap, int));
		printf("%d", val);
		if (i < n - 1)
			printf("%c", *separator);
	}
	putchar ('\n');
	va_end(ap);
}