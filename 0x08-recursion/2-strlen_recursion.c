#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * Return: length of string s
 * @s: pointer to the string s
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _puts_recursion(s + 1));
}
