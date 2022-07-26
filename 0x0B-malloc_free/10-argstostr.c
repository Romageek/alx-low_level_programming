#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, l1 = 0, l2 = 0;
	char *concat;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			l1++;
	}

	concat = (char *)malloc(l1 * sizeof(char) + ac + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, l2++)
			concat[l2] = av[i][j];
		concat[l2] = '\n';
		l2++;
	}

	concat[l2] = '\0';
	return (concat);
}
