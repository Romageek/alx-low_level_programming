#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: array of bytes
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or return NULL if no bytes are found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
