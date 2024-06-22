#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	int s;
	unsigned long x = 1, y = 1, i;
	printf("%lu, ", x);

	for(s = 3; s <= 101; s++)
	{
		i = x + y;
		x = y;
		y = i;

		printf("%lu", y);

		if ( s < 101)
			printf(", ");
	}
	printf("\n");
	return (0);
}
