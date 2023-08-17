#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a separator
 * @separator: The string to be printed between strings
 * @n: The number of strings to print
 * @...: The variable arguments containing the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

