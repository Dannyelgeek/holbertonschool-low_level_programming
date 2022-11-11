#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print a character.
 * @arg: character to print.
*/
void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}
/**
 * print_int - print a integer.
 * @arg: integer to print.
*/
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - print a decimal.
 * @arg: decimal tu print.
*/
void print_float(va_list arg)
{
	float dec;

	dec = va_arg(arg, double);
	printf("%f", dec);
}
/**
 * print_char_point - print a string.
 * @arg: string to print.
*/
void print_char_point(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - print all arguments.
 * @format: list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
	va_list all_args;
	int ind = 0, j = 0;
	char *separator = "";

	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_point}
	};
	va_start(all_args, format);

	while (format && (*(format + ind)))
	{
		j = 0;
		while (j < 4 && (*(format + ind) != *(funcs[j].sym)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(all_args);
			separator = ", ";
		}
		ind++;
	}
	printf("\n");
	va_end(all_args);
}

