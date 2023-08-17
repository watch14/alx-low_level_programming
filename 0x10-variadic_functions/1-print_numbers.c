#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers separated byseparator.
 * @separator: The string to be used as separator between numbers.
 * @n: The number of integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	for (; i < n ; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
