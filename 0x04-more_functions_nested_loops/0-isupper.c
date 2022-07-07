#include "main.h"

/**
* _isupper - checks for uppercase character
*
* Return: 1 if true, 0 if false
* @c: integer, parameter
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
