#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{

	int **myarr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	myarr = malloc(sizeof(int *) * height);

	if (myarr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		myarr[x] = malloc(sizeof(int) * width);
		if (myarr[x] == NULL)
		{
			for (; x >= 0; x--)

				free(myarr[x]);

			free(myarr);

			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			myarr[x][y] = 0;
	}
	return (myarr);
}

