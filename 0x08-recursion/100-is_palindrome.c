#include "main.h"

/**
 * _pal - checks if palindrome
 * @s: string to check
 * @x: helper
 * @len: length of the string
 * Return: 1 if true, 0 if false
 */

int _pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (_pal(s, x + 1, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _strlen_recursion(s)));
}
