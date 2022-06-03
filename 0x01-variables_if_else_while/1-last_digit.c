#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program to display the last digit of a randomly generated number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, R;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	R = (n % 10);
	if (R > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, R);
	}
	else if (R == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, R);
	}
	else if (R < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, R);
	}
	return (0);
}
