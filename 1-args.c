#include <stdio.h>

/**
  * main - Write a program that prints the
  * number of arguments passed into it.
  * @argc: the number of command lines argumnets
  * @argv: unused
  * Return: zero
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);

	return (0);
}
