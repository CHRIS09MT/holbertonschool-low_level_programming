#include "main.h"
#include <limits.h>

/**
* get_bit - return the value of the bit specified
* @n: the number to check
* @index: the index of the bit to check
* Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
