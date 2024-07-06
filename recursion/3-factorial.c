#include "main.h"

/**
 * factorial - return the factorial of n
 * @n: number the take out the factorial of n
 * Return: return the factorial
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
