#include "main.h"

/**
 * prime - return if the number is prime or not recursively
 * Return: 1 if true, 0 if false
 * @n: the given number
 * @x: divider
 */

int prime(int n, int x)
{
	if (x <= 1)
		return (1);
	if (n % x == 0)
		return (0);
	return (prime(n, x - 1));
}

/**
 * is_prime_number - returns if the input number is a prime number or not
 * Return: 1 if true, 0 if false
 * @n: the given number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
