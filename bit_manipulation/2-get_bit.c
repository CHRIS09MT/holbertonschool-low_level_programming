#include "main.h"

/**
* get_bit - return the value of the bit specified
* @n: the number to check
* @index: the index of the bit to check
* Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
