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
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 != NULL && s1[l1] != '\0')
		l1++;
	while (s2 != NULL && s2[l2] != '\0')
		l2++;

	concat = malloc(sizeof(char) * (l1 + l2 + 1));
	if (concat == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			concat[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			concat[i] = s2[j];
			i++;
			j++;
		}
	}
	concat[i] = '\0';

	return (concat);
}
