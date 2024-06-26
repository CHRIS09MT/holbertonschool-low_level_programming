#include "main.h"

/**
 * _puts - print the content thel pointer str
 * @str: the pointer
 */

void _puts(char *str)
{
	int a = 0; /** se tiene en cuenta desde el elemento 0 (1) */

	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
