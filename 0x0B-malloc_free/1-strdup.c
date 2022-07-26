#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to the duplicated string if success,
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	copy = malloc(sizeof(char) * (l + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		copy[i] = str[i];
	}
	copy[l] = '\0';
	return (copy);
}
