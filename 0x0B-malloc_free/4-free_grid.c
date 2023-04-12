#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: parametar
 *
 * @height: parametar
 *
 * Return: non
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
