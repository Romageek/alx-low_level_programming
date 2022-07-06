#include "main.h"

/**
* _isalpha - entry point
* Description: checks for alphabetic character
* Return: 1 if true, 0 if false
* @c: character given to the function as parameter
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
