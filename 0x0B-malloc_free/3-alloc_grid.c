#include <stdio.h>
#include<stdlib.h>
/**
 * alloc_grid - unction that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of an array
 * @height: height of an array
 * Return: a pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int i, j, k;
int **grid;

if (width <= 0 || height <= 0)
return (NULL);


grid = malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (i = 0; i < height ; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
	for (k = 0; k < i; k++)
	{
	free(grid[k]);
}
	free(grid);
	return (NULL);
}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
}
return (grid);

}
