#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment
 * @accept: string of bytes
 * Return: number of bytes in segment s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b;

	while (*(s + a) != '\0')
	{
		b = 0;
		while (accept[b] != '\0' && s[a] != accept[b])
			b++;
		if (accept[b] == '\0')
			return (a);
		a++;
	}
	return (a);
}
