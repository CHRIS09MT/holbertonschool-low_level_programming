#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	unsigned long x = 1, y = 2, s;
	int i;

	printf("%lu, %lu ", x, y);

	for (i = 0; i < 96; i++)
	{
		s = x + y;
		printf("%lu, ", s);

		x = y;
		y = s;
		s++;
	}
	printf("\n");
	return (0);
}
