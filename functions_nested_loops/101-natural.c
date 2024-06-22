#include <stdio.h>

/**
 * main - Start pointer
 * Return: Always 0
 */

int main()
{
	int n, s = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			printf("%d, ", n);
			s += n;
		}
	}
	printf("%d\n", s);
	return (0);
}
