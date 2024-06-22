#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main(void)
{
	unsigned long x = 1, y = 1, i;
	unsigned long s = 2;

	while (y <= 4000000)
	{
		i = x + y;
		x = y;
		y = i;

		if (y % 2 == 0)
			s += y;
	}
	printf("%lu\n", s);
	return (0);
}
