#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - allocating memory to a grid array
* @width: the width of grid
* @height: height of grid
* Return: pointer to grid.
*/
int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **y;

if (width <= 0 || height <= 0)
return (NULL);

y = malloc(sizeof(int *) * height);
if (y == NULL)
{
free(y);
return (NULL);
}
for ( ; i < height; i++)
{
y[i] = malloc(sizeof(int) * width);
if (y[i] == NULL)
{
for ( ; i >= 0; i--)
free(y[i]);
free(y);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for ( ; j < width; j++)
{
y[i][j] = 0;
}
}

return (y);
}
