#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concat all arguments passed
 *
 * @ac: numbers of argument
 * @av: argument arrays
 *
 * Return: returns concatenated mem (SUCCESS), NULL (ERROR)
 */



char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *mem;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	mem = malloc(sizeof(char) * (len + 1));
	if (mem == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			mem[k] = av[i][j];
			k++;
		}
		mem[k] = '\n';
		k++;
	}
	return (mem);
}
