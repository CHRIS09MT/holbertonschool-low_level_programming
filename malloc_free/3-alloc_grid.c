#include "main.h"
#include <stdlib.h>

/**
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (!arr)
		return (NULL);

	for (; a < height; a++)
	{
		arr[a] = malloc(width * sizeof (int));

		if (!arr[a])
		{
			for(; a >= 0; a--)
				free(arr[a]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
