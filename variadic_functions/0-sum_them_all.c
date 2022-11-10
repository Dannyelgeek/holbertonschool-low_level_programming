#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: counter.
 * Return: add if exited correctly.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list add_num;
	unsigned int add = 0, ind = 0;

	va_start(add_num, n);

	while(ind < n)
	{
		add += va_arg(add_num, int);
		ind++;
	}
	
	va_end(add_sum);
	return (add);
}

