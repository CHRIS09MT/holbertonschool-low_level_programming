#include "unistd.h"
#include "main.h"

/**
 * more_numbers - this funtion print the number the 0 to 14 in 14 lines
 */

void more_numbers(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 9; b++)
			_putchar(b + '0');
		for (b = 10; b < 15; b++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		write(STDOUT_FILENO, "\n", 1);
	}
}
