#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - initiates an array of arrays of integers
 *
 * @width: width of the grid
 *
 * @height: height of the grid
 *
 * Return: NULL or the grid
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j, k, l;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(4 * width);
		if (matrix[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		matrix[k][l] = 0;
	}
	return (matrix);
}
