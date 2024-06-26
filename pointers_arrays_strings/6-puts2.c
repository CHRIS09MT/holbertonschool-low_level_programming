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
		for (; a <= 8; a += 2)
			_putchar(*(str + a));
	}
	_putchar('\n');
}
