#include "main.h"
/**
* alloc_grid - allocatingn 2d array
* @width: width
* @height: height
* Return: pointer
*/
int **alloc_grid(int width, int height)
{
	int b, c, d, e;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			for (c = b; c >= 0; c--)
			{
				free(a[c]);
			}
			free(a);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
			a[d][e] = 0;
	}
	return (a);
}
