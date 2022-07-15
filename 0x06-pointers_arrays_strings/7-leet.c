#include "main.h"

/**
* leet - encodes a string into 1337
*
* @str: pointer to string
* Return: pointer to encoded string
*/

char *leet(char *str)
{
	int i = 0, j = 0;
	char sub = "aAeEoOtTlL";
	char encod = "43071";

	while (str[i] != '\0')
	{
		while (sub[j] != '\0')
		{
			if (str[i] == sub[j])
				str[i] = encod[j / 2];
			j++;
		}
		i++;
	}
	return (str);
}
