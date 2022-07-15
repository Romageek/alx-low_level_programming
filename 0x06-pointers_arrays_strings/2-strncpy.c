#include "main.h"

/**
* _strncpy - copies a string
*
* @dest: string
* @src: string
* @n: number of characters to copy
* Return: a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for (j = i; j < n; j++)
		*(dest + j) = '\0';
	return (dest);
}
