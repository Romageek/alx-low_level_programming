#include "main.h"

/**
* _strlen - returns the length of a string
*
* Return: length of the string
* @s: pointer to a string
*/

int _strlen(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
