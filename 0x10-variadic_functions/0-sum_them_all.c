#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * @...: The variable arguments.
 *
 *  Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args,  int);
	}
	va_end(args);
	return (sum);
}
