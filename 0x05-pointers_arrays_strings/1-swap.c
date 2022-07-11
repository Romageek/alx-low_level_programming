#include "main.h"

/**
* swap_int - swaps the values of two integers
*
* Return: void
* @a: pointer to an integer
* @b: pointer to an integer
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
