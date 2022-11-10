#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*/
void print_char(va_list arg)
{
	char character;
	character = va_arg(arg,int);
	print("%c", character);
}
/**
*/
void print_int(va_list arg)
{
	int num;
	num = va_arg(arg, int);
	printf("%d", num);
}
/**
*/
void print_float(va_list arg)
{
	float dec;
	dec = va_arg(arg, int);
	printf("%f", dec);
}
/**
*/
void print_char_point(va_list arg);
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
		{"s", print_string}
	};
	va_start(all_args, format);

	while (format && (*(format + ind)))
	{
		while (j < 4 && (*(format + ind) != *(funcs[j].sym)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j]print(all_args);
			separator = ", ";
		}
		ind++;
	}
	printf("\n");
	va_end(all_args);
}

