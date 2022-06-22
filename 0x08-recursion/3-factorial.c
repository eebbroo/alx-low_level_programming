#include "main.h"
#include <stdio.h>

/**
 *factorial - function that returns factorial of a number
 *
 *@n: Integer parameter
 *
 *Return: Return factorial(fact_num)
 */

int factorial(int n)
{
	int fact_num;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		fact_num = n * factorial(n - 1);
	return (fact_num);
}
