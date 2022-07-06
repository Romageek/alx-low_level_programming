#include "main.h"

/**
* _islower - entry point
* Description: checks for lowercase character
* Return: 1 if true or 0 if false
* @c: integer value as parameter
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
