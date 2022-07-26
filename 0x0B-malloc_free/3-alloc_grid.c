#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the new matrix if success, NULLon failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= a; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (i = 0; i < width; i++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
