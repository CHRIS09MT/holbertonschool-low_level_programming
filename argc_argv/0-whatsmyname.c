#include <stdio.h>

/**
  * main - Write a program that prints its name,
  * followed by a new line.
  * @argc: number of commands line argumnets
  * @argv: containing the program command line arguments
  * Return: zero
  */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[0]);

	return (0);
}
