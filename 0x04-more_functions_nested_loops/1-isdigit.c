#include "main.h"

/**
 * main - function that checks for a digit (0 through 9).
 *
 * Return: 1 if c is a digit bwtn (0 and 9) OR 0 if otherwise
 */

int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
