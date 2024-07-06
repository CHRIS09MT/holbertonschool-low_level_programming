#include <stdio.h>
#include <stdlib.h>

/**
  * main - Write a program
  * that adds positive numbers
  * @argc: number of command line arguments
  * @argv: containing the program command line arguments
  * Return: If one of the number contains symbols that are not digits,
  * print Error, followed by a new line, and return 1
  */
int main(int argc, char *argv[])
{
	int i = 0, j = 0, sum = 0;
	int array_length = 0;

	for (i = 1; i < argc; i++)
	{
		array_length = sizeof(argv[i]) / sizeof(argv[0]);
		for (j = 0; j <= array_length; j++)
		{
			if ((argv[i][j] != '0') && (int)argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
