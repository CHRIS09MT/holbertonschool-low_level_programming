#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	unsigned long int x = 1, y = 2, s;
	int i;

	printf("%lu, %lu, ", x, y);
	for (i = 0; i < 96; i++)
	{
		s = x + y;
		x = y;
		y = s;
		printf("%lu, ", s);
	}
	printf("\n");
	return (0);
}
