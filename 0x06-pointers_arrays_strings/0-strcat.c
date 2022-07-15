#include "main.h"

/**
* _strcat - concatenates two strings
*
* Return: a pointer to the resulting string
* @src: string
* @dest: string
*/

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	while (str[j] != '\0')
	{
		*(dest + i + j) += *(str + j);
		j++;
	}
	return (dest);
}
