#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: char used to delimit.
 * @n: items to print.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings_to_print;
	char *str;
	unsigned int ind = 0;

	va_start(strings_to_print, n);

	while (ind < n)
	{
		str = va_arg(strings_to_print, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
		ind++;
	}
	printf("\n");
	va_end(strings_to_print);
}

