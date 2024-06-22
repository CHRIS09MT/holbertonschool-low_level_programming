#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	int s;
	unsigned long x = 1, y = 1, i;

	for (s = 3; s <= 34; s++)
	{
		i = x + y;
		x = y;
		y = i;

		if (s == 33)
			printf("%lu", y);
	}
	printf("\n");
	return (0);
}
