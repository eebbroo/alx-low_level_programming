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
	printf("%d is positive\n", n);
	printf("%d is zero\n", n);
	printf("%d is negative\n", n);
	return (0);
}
