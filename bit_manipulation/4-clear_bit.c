#include "main.h"

/**
 * clear_bit - set the opposite of the mask
 * @n: number to set
 * @index: position
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}