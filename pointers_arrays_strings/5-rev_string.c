#include <stdio.h>
#include "main.h"

/**
 * rev_string - print in mode revers the content the pointer s
 * @s: the pointer
 */

void rev_string(char *s)
{
	int a = 0;
	int b;

	while (*(s + a) != '\0')
		a++;
	for (b = a - 1; b >= 0; b--)
		putchar(*(s + b));
	putchar('\n');
}
