#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	int s;
	unsigned long x = 1, y = 1, i;

	printf("%lu, %lu, ", x, y);

	for (s = 3; s <= 34; s++)
	{
		i = x + y;
		x = y;
		y = i;

		printf("%lu", y);

		if (s < 34)
			printf(", ");
	}
	printf("\n");
	return (0);
}
