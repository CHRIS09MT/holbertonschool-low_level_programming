#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	int s;
	unsigned long long x = 1, y = 1, i;

	printf("%llu, %llu, ", x, y);
	for (s = 3; s <= 50; s++)
	{
		i = x + y;
		x = y;
		y = i;
		printf("%llu", y);

		if (s < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
