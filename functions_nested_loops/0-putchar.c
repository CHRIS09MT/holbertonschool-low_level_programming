#include <unistd.h>
#include "main.h"

/**
 * main - Start pointer
 * Return: return 0
 */

int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 9);
	return (0);
}
