#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	int s;
	unsigned long x = 0, y = 1, i;

	printf("%lu, %lu, ", x, y);
	for (s = 3; s <= 50; s++)
	{
		i = x + y;
		x = y;
		y = i;
		printf("%lu", y);

		if (s < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
