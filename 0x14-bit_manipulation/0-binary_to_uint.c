#include "main.h"

/**
 *binary_to_uint - function that converts a binary number
 *to an unsigned int.
 *
 *@b: Char pointer to binary argument
 *
 *Return: return unsigned integer OR
 *zero(0) if unsuccesful
 */

unsigned int binary_to_uint(const char *b)
{
	int i;

	int value = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
