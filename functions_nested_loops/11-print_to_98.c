#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Start pointer
 * @n: number to print
 */

void print_to_98(int n)
{
	int a;
	if (n < 98)
	{
		for (a = n; a < 98; a++)
			printf("%d, ", a);
		if (a == 98)
			printf("%d\n", a);
	}
	else if (n == 98)
		printf("%d\n", n);
	else
	{
		if (n > 98)
		{
			for (a = n; a > 98; a--)
				printf("%d, ", a);
			if (a == 98)
				printf("%d\n", a);
		}
	}
}
