#include "main.h"

/**
* _strncat - concatenates two strings
*
* Return: a pointer to the resulting string
* @src: string
* @dest: string
* @n: number of bytes
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	while (j < n && str[j] != '\0')
	{
		*(dest + i + j) += str[j];
		j++;
	}
	return (dest);
}
