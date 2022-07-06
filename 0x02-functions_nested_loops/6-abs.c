#include "main.h"

/**
* _abs - entry point
* Description: computes the absolute value of an integer.
* Return: absolute value of n
* @n: the number given to the function as parameter
*/

int _abs(int n)
{
	int x = 0;

	if (n < 0)
	{
		x = n - (2 * n);
		return (x);
	}
	else if (n > 0)
	{
		x = n;
		return (x);
	}
	return (x);
}
