#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimentional array in ints
 * @grid: the 2-dimentional array of ints to be freed
 * @height: The height of grid
 * Return: empty
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	free(grid[index]);
	free(grid);
}
