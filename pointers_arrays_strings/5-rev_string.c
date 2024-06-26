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
	char c;

	while (*(s + a) != '\0')
		a++;
	for (b = 0; b < a / 2; b++)
	{
		c = (*(s + b));
		(*(s + b)) = (*(s + a - 1 - b));
		(*(s + a - 1 - b)) = c;
	}
}
