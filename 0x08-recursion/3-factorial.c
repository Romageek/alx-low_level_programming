#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * Return: the factorial
 * @n: the given number
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
