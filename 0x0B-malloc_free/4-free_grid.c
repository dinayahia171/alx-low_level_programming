#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid- print program
 * @grid: int
 * @height: list
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
free(grid[i]);
free(grid);
}
