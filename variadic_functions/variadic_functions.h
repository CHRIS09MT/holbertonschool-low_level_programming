#ifndef VARIADICF_H
#define VARIADICF_H
#include <stdarg.h>

/**
 * struct argtps - a struct that containts the a char represnting a datatype
 * and a pointer to a function that prints it.
 * @arg: the char representing the datatype
 * @printFunc: the function to print it*
 * Description: a struct that containts the a char represnting a datatype
 */

typedef struct argtps
{
	char arg;
	void (*printFunc)(va_list);
} argtype;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
