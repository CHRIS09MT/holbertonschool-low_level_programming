#include "main.h"

/**
 * puts2 - printing from 0 to 8, but of two of two.
 * @str: the pointer
 */

void puts2(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
