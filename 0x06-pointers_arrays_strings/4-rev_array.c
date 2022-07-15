#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
*
* @a: array to be reversed
* @n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i = 0, help = 0;

	n--;
	while (i <= n)
	{
		help = a[i];
		a[i] = a[n];
		a[n] = help;
		i++;
		n--;
	}
}
