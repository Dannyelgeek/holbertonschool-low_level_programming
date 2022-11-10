#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char used to delimit.
 * @n: number of elements to print.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums_to_print;
	unsigned int ind = 0;

	va_start(nums_to_print, n);
	while (ind < n)
	{
		printf("%d", va_arg(nums_to_print, int));
		if (separator != NULL && ind < n - 1)
			printf("%s", separator);
		ind++;
	}
	printf("\n");
	va_end(nums_to_print);
}

