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

	while (s < 96)
	{
		i = x + y;
		printf(", %lu", i);

		x = y;
		y = i;
		s++;
	}
	printf("\n");
	return (0);
}
