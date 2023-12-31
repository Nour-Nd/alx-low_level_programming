#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array, or return NULL on failure
 */

int **alloc_grid(int width, int height)

{
	int **mno;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mno = malloc(sizeof(int *) * height);

	if (mno == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mno[x] = malloc(sizeof(int) * width);

		if (mno[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mno[x]);

			free(mno);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mno[x][y] = 0;
	}

	return (mno);
}
