#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a separator
 * @separator: The string to be printed between strings
 * @n: The number of strings to print
 * @...: The variable arguments containing the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");

		printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);

}
