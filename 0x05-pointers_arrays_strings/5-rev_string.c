#include "main.h"

/**
* rev_string - reverses a string
*
* Return: void
* @s: pointer to a string
*/

void rev_string(char *s)
{
	int l = 0, i = 0;
	char str[500];

	while (s[l] != '\0')
	{
		str[l] = s[l];
		l++;
	}
	l--;

	while (l >= 0)
	{
		s[l] = str[i];
		l--;
		i++;
	}
}
