#include "main.h"

/**
* string_toupper -  changes all lowercase letters of a string to uppercase
*
* Return:pointer to the  modified string
* @str: pointer to a string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'A')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
