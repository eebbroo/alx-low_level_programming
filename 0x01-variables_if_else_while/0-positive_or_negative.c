#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d\n", n);
	printf("if %d is greater than 0: is positive\n", n);
	printf("if %d is 0: is zero\n", n);
	printf("if %d is less than 0: is negative\n", n);
	return (0);
}
