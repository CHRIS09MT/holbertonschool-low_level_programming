#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two numbers
 * @a: number 1
 * @b: number 2
 * Return: add a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: number 1
 * @b: number 2
 * Return: subtract a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: number 1
 * @b: number 2
 * Return: multiply a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: number 1
 * @b: number 2
 * Return: divide a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - take out the module of two numbers
 * @a: number 1
 * @b: number 2
 * Return: take out module of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100)
	}
	return (a % b);
}
