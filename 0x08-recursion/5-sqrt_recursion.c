#include "main.h"

/**
 * _sqrt - square root recursively
 * @n: number to calculate the sqaure root of
 * @x: checker
 * Return: square root
 */

int _sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion -  the value of x raised to the power of y
 * Return: the result
 * @n: number for which the square root is being looked for
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
