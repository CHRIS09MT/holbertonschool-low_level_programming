#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	int s, x = 1, y = 1, i;

	printf("%d, %d, ", x, y);
	
	for (s = 3; s <= 50; s++)
	{
		i = x + y;
		x = y;
		y = i;
		printf("%d", y);

		if (s < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
