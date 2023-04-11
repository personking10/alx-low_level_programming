#include "main.h"
/**
 * *alloc_grid - return a pointer
 * @width: int
 * @height: int
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **mas, i, j;


	mas = malloc(sizeof(*mas) * height);


	if (width <= 0 || height <= 0 || mas == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			mas[i] = malloc(sizeof(**mas) * width);
			if (mas[i] == 0)
			{
				while (i--)
					free(mas[i]);
				free(mas);
				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				mas[i][j] = 0;
			}
		}
	}
	return (mas);
}
