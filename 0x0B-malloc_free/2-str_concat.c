#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: pointer to the newly allocated  string if success,or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, l1 = 0, l2 = 0;

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	concat = malloc(sizeof(char) * (l1 + l2 + 1));
	if (concat == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < l1; i++)
			concat[i] = s1[i];
	}

	if (s2)
	{
		for (i = 0, j = 0; i < (l1 + l2); i++, j++)
			concat[i] = s2[j];
	}
	concat[l1 + l2 + 1] = '\0';

	return (concat);
}
