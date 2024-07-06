#include <stdio.h>
#include <stdlib.h>

/**
  * main - Write a program that multiplies two numbers.
  * @argc: number of command line arguments
  * @argv: containing the program command line arguments
  * Return: one
  */

int main(int argc, char *argv[])
{
	int valor1 = 0, valor2 = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	valor1 = atoi(argv[1]);
	valor2 = atoi(argv[2]);
	printf("%d\n", valor1 * valor2);
	return (0);
}
