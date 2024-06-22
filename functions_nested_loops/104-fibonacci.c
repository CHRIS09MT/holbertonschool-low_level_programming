#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	int s;
	unsigned long x = 1, y = 2, i;

	printf("%lu, %lu", x, y);

	for (s = 3; s <= 98; s++)
	{
		i = x + y;
		printf(", %lu", i);

		x = y;
		y = i;
	}
	printf("\n");
	return (0);
}
