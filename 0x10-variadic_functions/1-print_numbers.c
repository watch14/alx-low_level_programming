#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers separated byseparator.
 * @separator: The string to be used as separator between numbers.
 * @n: The number of integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n ; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
