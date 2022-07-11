#include "main.h"

/**
* rev_string - reverses a string
*
* Return: void
* @s: pointer to a string
*/

void rev_string(char *s)
{
	int l = 0;
	char *str;

	while (*(s + l) != '\0')
		l++;
	l--;
	while (l >= 0)
	{
		*str = *(s + l);
		str++;
		l--;
	}
	str = s;
}
